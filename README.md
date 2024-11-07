🌟 libft

A foundational C library created as part of the 1337 curriculum, designed to reimplement essential C standard functions from scratch. This project helped me dive into memory management,
string manipulation, and character functions.


---

📋 Project Overview

libft is a collection of custom C functions that replicate standard library functions. It aims to provide the same functionality as the standard library but with my own implementation.
Working on this has greatly improved my understanding of low-level programming.

🔧 Features

String Functions: Calculate length, copy, concatenate, and more.

Memory Management: Initialize memory, copy memory blocks, etc.

Character Checks: Verify if a character is a letter, digit, etc.


🚀 How to Use

1. Clone the Project:

https://github.com/Hamzarami2344/libft.git


2. Enter the Project Folder:

cd libft


3. Build the Library: Compile the library using:

make

This will create a file named libft.a, which is a static library you can use in your own projects.


4. Include libft in Your Code: To use these functions in a new C project, link libft.a during compilation:

gcc -o your_program your_program.c -L. -lft

Then, include the header file in your C files:

#include "libft.h"



📂 Functions List

Memory:

ft_memset: Fill a block of memory.

ft_memcpy: Copy memory area.


String:

ft_strlen: Get the length of a string.

ft_strcpy: Copy strings.


Character:

ft_isalpha: Check if character is alphabetic.

ft_isdigit: Check if character is a digit.



…and more to come!

---

Happy coding! 😄
