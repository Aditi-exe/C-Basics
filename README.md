# **Basics of Programming in C**

C is a popular, high-level programming language created by Dennis Ritchie in 1972. It was initially designed as a low-level language to provide direct hardware access, 
while still being flexible enough for high-level abstractions. 
C is not inherently an object-oriented programming language, but it can support object-oriented programming (OOP) concepts through the use of certain techniques such as 
structures and function pointers.

## Data Types in C

C supports several basic data types, which are:

1. Integers - used for storing whole numbers without decimal points. There are several types of integers in C, including:

- int: a signed integer, range: -2,147,483,648 to 2,147,483,647.
- short: a signed integer, range: -32,768 to 32,767.
- long: a signed integer, range: -2,147,483,648 to 2,147,483,647.
- unsigned int, unsigned short, unsigned long: unsigned integers that can hold only non-negative values.

Examples:
```
int x = 5;
short y = 3;
```

2. Floating-point numbers - used for storing numbers with decimal points. There are two types of floating-point numbers in C:

- float: a single-precision floating-point number that can hold up to 6 decimal places.
- double: a double-precision floating-point number that can hold up to 15 decimal places.

Examples:
```
float f = 78.33;
double d = 908.789;
```

3. Characters - used for storing individual characters. The char data type can store a single character, such as a letter or a symbol.

Examples:
```
char c = 'a';
char g = '.';
```

4. Boolean - used for storing true/false values. In C, boolean values are represented as integers, with 0 indicating false and any non-zero value indicating true.

5. Void - used to indicate that a function does not return a value, or that a pointer does not point to any specific data type.

6. Enumerated types - used for creating user-defined data types that can only take on certain values.

7. Arrays - used for storing multiple values of the same data type.

Examples:
```
int arr[4] = {10, 20, 30, 40};
char ch_arr[7] = {'f', 'a', 'y', 't', 'w', 'n', 'o'};
```

8. Pointers - used for storing memory addresses of variables and functions.


The program in this repository demonstrates the usage of a few of the above mentinoed data types and how they can be implemented in other places.

### Code:

```
// Taking an integer, a float and a character as uer input and printing the same using one print statement

#include <stdio.h>

int main()
{
    int x;
    float f;
    char ch;
  
    printf("Enter an integer: ");
    scanf("%d", &x);
  
    printf("Enter a floating point number: ");
    scanf("%f", &f);
  
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\n");
  
    printf("Integer: %d\nFloat: %f\nCharacter: %c\n", x, f, ch);
  
    return 0;
}
```

### Output:

![basics.c output](https://github.com/Aditi-exe/C-Basics/blob/main/basics1.PNG)

