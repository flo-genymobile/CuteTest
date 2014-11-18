CuteTest
========

Simple QtProject with tests
QT 5.3

For the tests QtTestLib and GoogleMock are used together.
The test module sits under the project module.
The GMock library is also a module sitting under the test module.

The GMock library should be built beforehand since the test are linked against it.
It has a .pro configured to build the static library.
To build it go to test/external/ and run: qmake && make

The test module also has its own .pro.
It links against the GMock library and need the headers of the main project to be built.
To build it, go to test/ and run: qmake && make

Once built, the tests are package in a binary in test/out/ directory.
To execute the tests, run: ./test/out/test


