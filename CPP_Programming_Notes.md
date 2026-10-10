# C++ Programming – Quick Notes

## 1. Basic Structure

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Write program statements here

    return 0;
}
```

- `#include <iostream>` – Provides input and output objects such as `cin` and `cout`.
- `using namespace std;` – Lets us use standard-library names such as `cout` and `cin` without writing `std::` each time.
- `int main()` – The starting function of a standard C++ program.
- `{ }` – Marks the beginning and end of a block.
- `return 0;` – Indicates that the program finished successfully.

**Note:** Some older compilers use `#include <iostream.h>`, `#include <conio.h>`, `void main()`, `clrscr()`, and `getch()`. These are not standard modern C++. The examples in these notes use standard C++.

## 2. Header Files

A header file provides declarations for features used in a program.

| Header file | Use |
|---|---|
| `<iostream>` | Input and output using `cin` and `cout` |
| `<cmath>` | Mathematical functions such as `sqrt()` and `pow()` |
| `<cstring>` | Functions for working with C-style strings |
| `<string>` | The C++ `string` data type |

## 3. Data Types

A data type tells C++ what kind of value a variable stores.

| Data type | Stores | Example |
|---|---|---|
| `int` | Whole numbers | `int age = 20;` |
| `float` | Decimal numbers | `float mark = 85.5f;` |
| `char` | One character | `char grade = 'A';` |
| `double` | Decimal numbers with more precision | `double pi = 3.14159;` |
| `string` | Text | `string name = "Arun";` |
| `bool` | `true` or `false` | `bool passed = true;` |

Example:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age = 20;
    float mark = 85.5f;
    char grade = 'A';
    double pi = 3.14159;
    string name = "Arun";
    bool passed = true;

    cout << name << endl;
    cout << age << endl;
    cout << mark << endl;
    cout << grade << endl;
    cout << pi << endl;
    cout << passed << endl;

    return 0;
}
```

## 4. Output: `cout`

`cout` displays information on the screen. The insertion operator `<<` sends values to the output stream.

**Syntax:**

```cpp
cout << value;
```

Example:

```cpp
int age = 20;
cout << "Age = " << age;
```

To print on a new line, use `endl` or `\n`.

```cpp
cout << "Hello" << endl;
cout << "World\n";
```

## 5. Input: `cin`

`cin` reads input entered by the user. The extraction operator `>>` stores the input in a variable.

**Syntax:**

```cpp
cin >> variable;
```

Example:

```cpp
int age;

cout << "Enter your age: ";
cin >> age;

cout << "Age = " << age;
```

To read multiple values:

```cpp
int a, b;

cout << "Enter two numbers: ";
cin >> a >> b;
```

**Note:** `cin >> name` reads a single word when `name` is a string. To read a full line containing spaces, use `getline(cin, name)`.

## 6. Common Input and Output Examples

C++ streams do not require C-style format specifiers such as `%d` or `%f`. The data type determines how `cin` and `cout` handle a value.

```cpp
int n;
float price;
char grade;
string name;

cin >> n;       // Read an integer
cin >> price;   // Read a float
cin >> grade;   // Read one character
cin >> name;    // Read one word

cout << n;      // Display an integer
cout << price;  // Display a decimal value
cout << grade;  // Display a character
cout << name;   // Display a string
```

For a string containing spaces:

```cpp
string fullName;

cout << "Enter your full name: ";
getline(cin, fullName);

cout << "Name: " << fullName;
```

If `getline()` is used immediately after `cin >>` in the same program, the leftover newline may need to be cleared first. One common solution is `cin.ignore()` before `getline()`.

## 7. Useful New-Line and Formatting Options

| Feature | Meaning |
|---|---|
| `endl` | Ends the current line and flushes the output stream |
| `\n` | Moves output to a new line |
| `\t` | Adds a tab space |

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\nWorld" << endl;
    cout << "Name\tAge" << endl;
    cout << "Arun\t20" << endl;

    return 0;
}
```

Output:

```text
Hello
World
Name    Age
Arun    20
```

## 8. Basic Operators

| Operator | Meaning | Example |
|---|---|---|
| `+` | Addition | `a + b` |
| `-` | Subtraction | `a - b` |
| `*` | Multiplication | `a * b` |
| `/` | Division | `a / b` |
| `%` | Remainder for integers | `a % b` |
| `=` | Assign a value | `a = 10;` |
| `==` | Check equality | `a == b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |
| `&&` | Logical AND | `a > 0 && b > 0` |
| `||` | Logical OR | `a > 0 || b > 0` |
| `!` | Logical NOT | `!(a > 0)` |

Example:

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;
    cout << "Difference = " << a - b << endl;
    cout << "Product = " << a * b << endl;

    if (b != 0)
    {
        cout << "Quotient = " << a / b << endl;
        cout << "Remainder = " << a % b << endl;
    }

    return 0;
}
```

**Note:** When both operands are integers, `/` performs integer division. For example, `5 / 2` gives `2`. Use a floating-point operand when you need a decimal result.

## 9. Remember

1. C++ is case-sensitive: `Age` and `age` are different.
2. Most statements end with a semicolon (`;`).
3. Use double quotes for strings: `"Hello"`.
4. Use single quotes for one character: `'A'`.
5. Use `cin` for input and `cout` for output.
6. Use `<<` with `cout` and `>>` with `cin`.
7. Declare variables with suitable data types.
8. Initialize variables before using their values.
9. Include the required header files.
10. Standard C++ programs use `int main()` and usually finish with `return 0;`.

**End of Quick Notes**
