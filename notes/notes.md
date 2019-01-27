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

### chapter 5

Containers in the STL have associated **iterators** that permit efficient extraction of elements without resorting to indices. As an example, given a vector `vector<double> vec`, we can get an iterator via `vector<double>::const_iterator iter = vec.begin()`. This gives a pointer to the vector structure, which we can get the value for via dereferencing, `*iter`.

In fact, every STL container has two associated iterators: the `const_iterator` and `iterator`. The first gives us read-only access, while the second is more general and allows us to change values stored in the container.

If our iterator is point to a *struct*, then instead of writing `(*iter).name`, we can use syntactic sugar to write `iter->name`.

### chapter 7

C++'s STL supports **associative containers**, which automatically arrange their elements into a sequence that depends on the values of the elements themselves, rather than the sequence in which we inserted them. The most common data structure of this sort is the **associative array**, and C++'s implementation in the STL is a **map**, in `<map>`.

### chapter 8

We start getting into the type system. C++ implements parametric polymorphism through **generic functions** and **templates**. Template functions need to have initialized **template parameters**.

We declare in the beginning `template <class T>` to determine the available type variables. Then we can use this type variable as we wish, such as declaring `vector<T>`, which is a functorial type based off this type variable.

### chapter 9

C++ allows you to define your own *types* via **classes**. One of the main benefits of classes is *encapsulation* and *abstraction*. C++ supports data hiding by allowing authors of types to say which members of those types are **public** and which are **private**.

**Constructors** are special member functions that define how objects are initialized. They function similar to Python's `__init__` method in classes.

### chapter 10

**Pointers** are values that represent the memory address of an object. If `x` is an object, we can get the address using the operator `&x`. Given a pointer `p`, we can **dereference** it to get its underlying value using the operator `*p`. Given a type `T`, a pointer to an object of type `T` has type `T*`.

**Arrays** are the statically-sized list in C++. They are effectively pointers. We can initialize an array of fixed size by the bracket notation, eg. `double coords[3]`. The array `coords` also gives us a pointer that points to the first element of the array, `*coords == coords[0]`.

An important concept in C++ is memory management. One kind is *automatic* memory management, such as when instantiating local variables. A local variable occupies memory that the system allocates for it, but when the block that the variable sits in ends, that memory is deallocated, causing pointers to that part of memory to be rendered invalid. C++ does not warn programmers of this, so they can be tricky to debug. As an example, see `ch10/mem.cpp`.

One way to get around this is to ask for memory to be **statically allocated**. By saying something is `static`, we are saying that we want to allocate it once, and only once, at some point before the first time that a function is called, and that we don't want to deallocate it as long as the function runs.

However, this is also a bit tricky. Running a function returning a static variable will create a new pointer to the same object every time it's called! If we want to create new objects instead, we should use **dynamic allocation**. This uses the `new` and `delete` keywords. See `ch10/dynamic.cpp`.