# 🏭 C
---

## 💬 Advantages and Disadvantages of using C:
### Advantages: ✅
1. Its very low level so it leads into OOP and in conjunction, C++, Java, Python, etc.

### Disadvantages: ❌
1. It has no dynamic memory support in core libraries
2. No "safe" string type. There's no `string` or `str` type in C, just character arrays.

## 🎭 Comment Types:
1. `/ /` - Single Line Comment:
➡️ Can enter single line comments from this.
Example:
```C
#include <stdio.h>
/ This is a single line comment /
/ Main functions and shit start from here /
```

2. `/* */` - Multi Line Comment:
➡️ Can enter multiple lines of comments.
Example:
```C
#include <stdio.h>
/* This is a multiline
comment */
```
---
## 🤖 Variables:

1. `int` - Integer: 
➡️ Specifies an integer value.
Example:
```C
#include <stdio.h>
int age = 27;
int year = 2025;
```
Additional qualifiers for `int` are:
- `short` - int will be 16 bits long
- `long` - int will be atleast 32 bits long

**NOTE:**: The variable naming rules are the same as most of the other languages like Python and Java.

2. `char` - Character:
➡️ It holds the value of 1 byte. Its capable of holding one character from a set.
Example:
```C
#include <stdio.h>
char a = 'a';
char b = 'b';
```
Additional qualifiers for `char` or any `int` are:
- `unsigned` - `unsigned` numbers are always positive or zero. They also obey the laws of arithmetic modulo 2<sup>n</sup>.
Example for Arithmetic Modulo Laws:
➡️ If the size of a `char` variable is 8 bits, then `unsigned char` variables can have values between 0 and 255, while `signed char` can have values between -128 and 127.
➡️ Printable characters ***ARE ALWAYS*** positive values.

3. `float` - Floating Point number upto single-precision:
➡️ It holds floating point numbers that have only one decimal place. 
Example:
```C
#include <stdio.h>
float a = 15.7
float b = 15.47 // This is an incorrect float value.
```

4. `double` - Floating Point number upto double-precision:
➡️ It holds floating point numbers that have upto 2 decimal places.
**Example:** Refer the example for `float`. `float b` is technically a `double` data type.

---
## 💨 Escape Sequence Characters:

➡️ These are used for applying specific characters that need a special syntax.

### `\n` - New Line:
➡️ This character specifies a new line, or an enter sequence for C. After its present, the cursor shifts to the next available line.

### `\a` - Alert (Bell):
➡️ This is used to alert the user by making a beeping sound, hence the name. On modern systems, its borderline legacy and pretty much useless.

### `\\` - Backslash:
➡️ This is used to indicate a backslash. Mostly because just a `\` indicates the compiler that some escape sequence character is upcoming after the backslash, like `\n`, `\a`, etc. `\\` indicates a backslash because just a single one is part of the original syntax.
Example:
```C
#include <stdio.h>
int main() {
    printf("C:\Users\ProgramFiles"); // This will give a syntax error.
    printf("C:\\Users\\ProgramFiles"); // This is how a backslash is used.
}

Output will be:
Some syntax error
C:\Users\ProgramFiles
```
### `\b` - Backspace:
➡️ This character specifies a backspace.

### `\?` - Question Mark:
➡️ This character specifies a question mark character. Used in legacy C code for Trigraph Characters. Now obsolete.

### `\f` - Formfeed:
➡️ Used as a Page Break for Printers and Terminals back in the day. Obsolete now.

### `\'` - Single Quote:
➡️ This character specifies a single quotation mark.

### `\"` - Double Quotes:
➡️ This character specifies double quotation marks.

### `\r` - Carriage Return:
➡️ This character specifies a carriage return. Its basically `\n` but without going to a new line. It brings the cursor back to the beginning but on the same line.

### `\ooo` - Octal Number:
➡️ This character specifies a octal number (base 8 system).

### `\xhh` - Hexadecimal Number:
➡️ This character specifies a hex number (base 16 system).

### `\t` - Horizontal Tab:
➡️ This character specifies a horizontal tab space.

### `\v` - Vertical Tab:
➡️ This character specifies a verticals tab space.

---
## 📝 Operators:

➡️ These are again very similar to any other programming language.

### Arithmetic Operators:
`+`, `-`, `*`,`/`,`%` are all arithmetic operators.

### Relational and Logical Operators:
`<`, `>`, `<=`, `>=`, `==`, `!=`, `&&`, `||` are all relational and logical operators.

➡️ The definition of a numeric value of a logical or relational expression ***is*** 1 if the relation is ***true***, and 0 if ***false***.

### Unary Negation Operator `!`:
➡️ The operator `!` converts `0` to `1`, and `1` to `0`.
Example:
`if(valid == 0)` indicates that the value should be ***false***.
`if(!valid)` also indicates the same thing.

### Increment and Decrement Operators:
`++` is the Increment Operator, `--` is the decrement operator. Action depends on the position of these operators. If they're present ***before*** the variable, they're called **pre-increment/decrement** operators. If they're present ***after*** the variable, they're called **post-increment/decrement** operators.
➡️ Pre-increment/decrement does the operation first and then proceeds.
➡️ Post-increment/decrement proceeds first and does the operation second.
**NOTE:** These can only be applied to variables and ***not*** expressions. For example, `(i+j)++` is illegal.

### Bitwise Operators:
