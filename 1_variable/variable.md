
## 🧠 What is a Variable?

#### A **variable** in C is a **named location in memory** used to store a value that can be modified during program execution. Think of it as a container with a name, where you can store and retrieve data.
---

## 🧱 Variable Declaration & Definition

### 🟦 Declaration
Tells the compiler that a variable **exists** and its **type**.
```c
extern int age;  // Declaration (no memory allocated yet)
```

### 🟩 Definition
Creates the variable and allocates **memory**.
```c
int age;         // Definition (memory is allocated)
```

> Note: Declaring and defining are often done together unless working with multiple files.

---

## 📚 Syntax of Variable Declaration

```c
type variable_name;
```

### Example:
```c
int number;
float price;
char grade;
```

---

## 🔢 Types of Variables (Based on Storage and Scope)

### 1. **Local Variables**
- Declared inside a function or block.
- Scope is limited to that block.
- Not accessible outside.

```c
void function() {
    int x = 10; // local
}
```

### 2. **Global Variables**
- Declared outside any function.
- Accessible from any function in the same file (and external files using `extern`).

```c
int count = 0; // global

void foo() {
    count++;
}
```

### 3. **Static Variables**
- Retain their value between function calls.
- Scope is **local**, but lifetime is **throughout the program**.

```c
void counter() {
    static int count = 0;
    count++;
    printf("%d", count);
}
```

### 4. **Extern Variables**
- Used to declare a global variable that is defined in another file.

```c
extern int total;  // defined in another .c file
```

### 5. **Register Variables**
- Hint to store variable in CPU registers (very fast).
- Cannot get address using `&`.

```c
register int speed;
```

---

## 🧮 Data Types and Sizes

| Type     | Size (typical) | Format Specifier |
|----------|----------------|------------------|
| `int`    | 4 bytes        | `%d`             |
| `float`  | 4 bytes        | `%f`             |
| `double` | 8 bytes        | `%lf`            |
| `char`   | 1 byte         | `%c`             |

> Sizes can vary depending on architecture (32-bit vs 64-bit).

---

## ⚙️ Variable Initialization

You can assign a value during declaration:

```c
int a = 10;
float b = 5.75;
char c = 'A';
```

Uninitialized variables contain **garbage values**.

---

## 🧪 Scope and Lifetime Summary

| Type     | Scope     | Lifetime      |
|----------|-----------|---------------|
| Local    | Block     | Until block ends |
| Global   | File      | Entire program  |
| Static   | Block/File| Entire program  |
| Register | Block     | Until block ends |

---

## 🔐 Best Practices

- Always initialize variables.
- Use meaningful variable names.
- Limit scope as much as possible.
- Prefer `const` if variable shouldn't change.
- Avoid using `global` unless necessary.

---

## 🧰 Example Program

```c
#include <stdio.h>

// Global variable
int g = 100;

void display() {
    static int counter = 0; // Static variable
    counter++;
    printf("Static counter: %d\n", counter);
}

int main() {
    int a = 10;         // Local variable
    float b = 5.5;

    printf("Global g: %d\n", g);
    printf("Local a: %d, b: %.2f\n", a, b);

    display(); // counter = 1
    display(); // counter = 2

    return 0;
}
```

---

If you want to go further, I can explain:
- **Pointers and variables**
- **Memory layout of variables**
- **Constants vs variables**
- **Volatile variables (used in embedded systems)**

Let me know what you'd like to explore next!