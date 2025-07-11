# Find the Largest of Three Numbers Using Multiple if Statements

This C++ program takes three integers as input and determines which number is the largest using multiple `if` conditions combined with logical AND operators.

---

## 🚀 How It Works

- Prompts the user to enter three integers: `a`, `b`, and `c`
- Checks each condition independently:
  - If `a > b` **and** `a > c`, prints "a is largest"
  - If `b > a` **and** `b > c`, prints "b is largest"
  - If `c > a` **and** `c > b`, prints "c is largest"
- Uses logical AND (`&&`) operators to ensure that the checked number is greater than both of the others
- Note: This approach does **not** handle the case of equal largest numbers (ties)
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
- **Multiple `if` statements**
- **Logical AND (`&&`) operators**
- **Comparison operators (`>`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
