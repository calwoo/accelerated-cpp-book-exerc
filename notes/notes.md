### chapter 0

To compile a `.cpp` file in unix, we use the g++ compiler. For a single `.cpp` file, the standard command is `g++ -o <file> <file>.cpp`.

### chapter 1

As a reminder, the **const** keyword on a variable, eg `const int x = 3` ensures we can't change the value of that later. It makes the variable *immutable*.

### chapter 3

C-style static arrays are limited. The C++ standard library (STL) has as a *container* the dynamic array (called here a **vector**). To specify a vector, we use type `vector<underlying datatype>`, eg. `vector<int>` or `vector<double>`. The vector type is defined using **template classes*, which are a form of polymorphism.

To add an element to a vector, we use the `.push_back(item)` method. This is the analogous method to `.append(item)` in Python lists.

### chapter 4

In C++, functions use **call-by-value**, which means that when calling a function `f(v1, v2, v3)`, the arguments are evaluated first. This is because the functions parameters are initialized to copies of the arguments' values, and do not refer directly to the arguments themselves.

For notes on multi-file compilation, see the ch4 folder.