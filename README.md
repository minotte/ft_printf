# ft_printf

> A 42 project to reimplement the standard C `printf` function, focusing on formatting and output of various data types.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Usage](#usage)
- [Compilation and Execution](#compilation-and-execution)
- [Supported Conversions](#supported-conversions)
- [Allowed Functions](#allowed-functions)


---

## Overview

The **ft_printf** project requires building a function that mimics the behavior of the C standard library function `printf`. This function should format and print data to the standard output, supporting a subset of conversion specifiers.

here you can find the [subject](https://github.com/minotte/ft_printf/blob/main/en.subject.pdf)

## Features

- **`ft_printf` Implementation**: A streamlined version of `printf` that replicates its functionality for specific types.
- **Variable Argument Handling**: Uses variadic functions (`stdarg.h`) to manage an unknown number of arguments.
- **Error Handling**: Ensures proper handling of errors and returns the number of characters printed.

## Usage

### Function Prototype
```c
int ft_printf(const char *format, ...);
```
### Compilation and Execution

- ``make`` to compile.

- ``clean`` to clean all compiled files without the library file.

- ``fclean`` to clean all compiled files with the library file.

- ``re`` to fclean then make.

### Run the Program
```bash
./test_printf
```

## Supported Conversions

For the mandatory part of the project, there are 9 flags to be handle:

|    Name    | Description |
|:----------:|      --     |
| **%c**  | Prints a single character. |
| **%s**  | Prints a string (as defined by the common C convention). |
| **%p**  | Prints a pointer address in hexadecimal. |
| **%d**  | Prints a decimal (base 10) number. |
| **%i**  | Prints an integer in base 10. |
| **%u**  | Prints an unsigned decimal (base 10) number. |
| **%x**  | Prints a number in hexadecimal (base 16) lowercase format. |
| **%X**  | Prints a number in hexadecimal (base 16) uppercase format. |
| **%%**  | Prints a literal `%` caracter. |

## Allowed Functions

The following standard C library functions are allowed:

- write
- malloc
- free
- va_start
- va_arg
- va_copy
- va_end
