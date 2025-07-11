# Find the Largest of Three Numbers Using Nested if-else

This C++ program takes three integers as input and determines which number is the largest using nested `if-else` statements.

---

## 🚀 How It Works

- Prompts the user to enter three integers: `a`, `b`, and `c`
- Checks:
  - If `a > b`
    - If `a > c`, prints "a is largest"
    - Else, prints "c is largest"
  - Else
    - If `b > c`, prints "b is largest"
    - Else, prints "c is largest"
- Uses nested `if-else` blocks to handle all possible cases
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

a=5
b=8
c=3
b is largest

a=12
b=7
c=9
a is largest

a=4
b=6
c=10
c is largest

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Nested `if-else` statements**
- **Comparison operators (`>`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
