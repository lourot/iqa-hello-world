# IQA - Hello World

Simplest example of a project:

* building the [Image Quality Assessment](https://sourceforge.net/p/iqa/wiki/Home/) C library, and
* compiling a C++ app and linking it against IQA.

```
$ ./buildAndRun.sh
-- Download IQA
[...]
-- Unpack IQA
[...]
-- Build libiqa.a
[...]
-- Compile example.o
-- Link example.bin
-- Run example.bin
--- Create image
--- Perform the Mean Squared Error of the image with itself
Result: 0
```
