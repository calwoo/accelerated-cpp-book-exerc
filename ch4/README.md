## multi-file compilation in g++

To compile a single simple program, say `hello.cpp`, we can use `g++ hello.cpp` to form an output `a.out` file. To give it a name, we can say `g++ -o hello hello.cpp`. This forms a `hello` object, which can be run by running `./hello`. The `-o` flag allows us to give a name to the output file.

### how about many files?

We have to compile + link them. To do so, we can write all the files to be linked together at the same time in one command `g++ -o main main.cpp median.cpp grade.cpp Student_info.cpp`.