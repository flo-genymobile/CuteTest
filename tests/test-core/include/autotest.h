#ifndef AUTOTEST_H
#define AUTOTEST_H

#include <QTest>
#include <QList>
#include <QString>
#include <QSharedPointer>

namespace AutoTest
{
    typedef QList<QObject*> TestList;
    inline TestList& testList()
    {
        static TestList list;
        return list;
    }

    inline bool findObject(QObject *object)
    {
        TestList &list = testList();
        if (list.contains(object))
        {
            return true;
        }
        foreach(QObject *test, list)
        {
            if (test->objectName() == object->objectName())
            {
                return true;
            }
        }
        return false;
    }

    inline void addTest(QObject *test)
    {
        TestList &list = testList();
        if (!findObject(test))
        {
            list.append(test);
        }
    }

    inline int run(int argc, char **argv)
    {
        foreach(QObject *test, testList()) {
            const char *testName = test->metaObject()->className();
            qDebug() << "Now running: " << testName;    
            
            QString resultFilePath = QString(argv[3]) + testName + ".xml";
            char rawPath[resultFilePath.size() + 1];
            strcpy(rawPath, resultFilePath.toLocal8Bit().data());
            char *newArgv[] = {argv[0], argv[1], argv[2], rawPath };    
            
            int ret = 0;
            ret = QTest::qExec(test, argc, newArgv);
            
            if (ret > 0) {
                qDebug() << testName << "ran with errors";
            }
        }

        
        qDebug() << "All test were ran";

        return 0;
    }
}

template <class T>
class Test
{
public:
    QSharedPointer<T> child;
    Test(const QString &name) : child(new T)
    {
        child->setObjectName(name);
        AutoTest::addTest(child.data());
    }
};

#define DECLARE_TEST(className) static Test<className> t(#className);

#define TEST_MAIN \
    int main(int argc, char **argv) \
    { \
        return AutoTest::run(argc, argv); \
    }

#endif //AUTOTEST_H
