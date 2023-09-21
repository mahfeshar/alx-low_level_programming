# C - Function pointers
It's a practise for function pointers.

## Tests: ✅

* [tests](./tests): Folder containing test files

## Programs: 🖥

* [programs](./programs): Folder containing program files after compilation.

## Header files: 📁
* [function_pointers.h](./function_pointers.h): Header file containing prototypes for some programs.

| File                 | Prototype                                                            |
| -------------------- | -------------------------------------------------------------------- |
| `0-print_name.c`     | `void print_name(char *name, void (*f)(char *));`                    |
| `1-array_iterator.c` | `void array_iterator(int *array, size_t size, void (*action)(int));` |
| `2-int_index.c`      | `int int_index(int *array, int size, int (*cmp)(int));`              |

* [3-calc.h](./3-calc.h): Header file containing prototypes for 

## Tasks 📑

* **0. What's my name**
  * [0-print_name.c](./0-print_name.c): C function that prints a name.

* **1. If you spend too much time thinking about a thing, you'll never get it done**
  * [1-array_iterator.c](./1-array_iterator.c): C function that executes a function given as a parameter on each element of an array.

* **2. To hell with circumstances; I create opportunities**
  * [2-int_index.c](./2-int_index.c): C function that searches for an integer.

* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * [3-op_functions.c](./3-op_functions.c): File containing the following five functions:
    * `op_add`: Returns the sum of `a` and `b`.
    * `op_sub`: Returns the difference of `a` and `b`.
    * `op_mul`: Returns the product of `a` and `b`.
    * `op_div`: Returns the division of `a` by `b`.
    * `op_mod`: Returns the remainder of the division of `a` by `b`.

  * [3-get_op_func.c](./3-get_op_func.c): C function that selects the correct function from `3-op_functions.c` to perform the operation asked by the user.

  * [3-main.c](./3-main.c): C program that performs simple mathematical operations.

* **4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker**
  * [100-main_opcodes.c](./100-main_opcodes.c): C program that prints the opcodes of its own main function, followed by a new line.
