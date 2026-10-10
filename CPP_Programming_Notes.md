# C++ Programming – Quick Notes

## 1. Basic Structure

```cpp
#include<iostream.h>
#include<conio.h>

void main()
{
    // Write program statements here

    getch();
}
```

- `#include<iostream.h>` – Provides `cout` and `cin` in older compilers.
- `#include<conio.h>` – Used for console functions such as `getch()` in some older compilers.
- `void main()` – The entry-point style used in some older C++ compilers.
- `{ }` – Marks the beginning and end of a block.
- `getch()` – Waits for a key press in supported older compilers.

**Note:** This format is intended for older compilers such as Turbo C++. It is not standard modern C++. Modern C++ normally uses `#include <iostream>`, `int main()`, and `return 0;`.

## 2. Header Files

A header file provides declarations for functions and features used in a program.

| Header file | Use |
|---|---|
| `iostream.h` | Input and output using `cout` and `cin` in older compilers |
| `conio.h` | Console functions such as `getch()` in some older compilers |
| `math.h` | Mathematical functions |
| `string.h` | Functions for working with C-style strings |

## 3. Data Types

A data type tells C++ what kind of value a variable stores.

| Data type | Stores | Example |
|---|---|---|
| `int` | Whole numbers | `int age = 20;` |
| `float` | Decimal numbers | `float mark = 85.5;` |
| `char` | One character | `char grade = 'A';` |
| `double` | Decimal numbers with more precision | `double pi = 3.14159;` |

## 4. Output: `cout`

`cout` displays information on the screen.

**Syntax:**

```cpp
cout<<"Message";
```

Example:

```cpp
int age = 20;
cout<<"Age = "<<age;
```

## 5. Input: `cin`

`cin` reads input entered by the user.

**Syntax:**

```cpp
cin>>variable;
```

Example:

```cpp
int age;

cout<<"Enter your age :: ";
cin>>age;

cout<<"Age = "<<age;
```

To read two values:

```cpp
int a,b;

cout<<"Enter two numbers :: ";
cin>>a>>b;
```

## 6. Basic Input and Output Example

```cpp
#include<iostream.h>
#include<conio.h>

void main()
{
    int age;
    float mark;
    char grade;

    cout<<"Enter your age :: ";
    cin>>age;

    cout<<"Enter your mark :: ";
    cin>>mark;

    cout<<"Enter your grade :: ";
    cin>>grade;

    cout<<"Age = "<<age<<endl;
    cout<<"Mark = "<<mark<<endl;
    cout<<"Grade = "<<grade;

    getch();
}
```

## 7. Useful Escape Sequences

| Sequence | Meaning |
|---|---|
| `\n` | Moves output to a new line |
| `\t` | Adds a tab space |

Example:

```cpp
#include<iostream.h>
#include<conio.h>

void main()
{
    cout<<"Hello\nWorld";
    cout<<"\nName\tAge";
    cout<<"\nArun\t20";

    getch();
}
```

## 8. Basic Operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `a+b` |
| `-` | Subtraction | `a-b` |
| `*` | Multiplication | `a*b` |
| `/` | Division | `a/b` |
| `%` | Remainder | `a%b` |
| `=` | Assign a value | `a=10;` |
| `==` | Check equality | `a==b` |
| `>` | Greater than | `a>b` |
| `<` | Less than | `a<b` |
| `&&` | Logical AND | `a>0 && b>0` |
| `||` | Logical OR | `a>0 || b>0` |
| `!` | Logical NOT | `!(a>0)` |

Example:

```cpp
#include<iostream.h>
#include<conio.h>

void main()
{
    int a,b;

    cout<<"Enter two numbers :: ";
    cin>>a>>b;

    cout<<"Sum = "<<a+b<<endl;
    cout<<"Difference = "<<a-b<<endl;
    cout<<"Product = "<<a*b<<endl;

    getch();
}
```

## 9. Remember

1. C++ is case-sensitive: `Age` and `age` are different.
2. Most statements end with a semicolon (`;`).
3. Use double quotes for text: `"Hello"`.
4. Use single quotes for one character: `'A'`.
5. Use `cin` for input and `cout` for output.
6. Use `<<` with `cout` and `>>` with `cin`.
7. Choose the correct data type for each variable.
8. Initialize variables before using their values.
9. This note follows the older `iostream.h`, `conio.h`, `void main()`, and `getch()` style requested.

**End of Quick Notes**
