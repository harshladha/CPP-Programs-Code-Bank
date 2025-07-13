# Calculate Factorial of a Number and Show Multiplication Steps

This C++ program calculates the factorial of a user-specified number and prints the multiplication steps using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter a number `a`.
- Initializes:
  - `b = 1` to store the factorial result.
- Uses a `while` loop that runs while `a >= 1`:
  - Prints the current value of `a` followed by `x` to show the multiplication step.
  - Multiplies `b *= a` to accumulate the factorial.
  - Decrements `a` by 1.
- After the loop:
  - `\b=` erases the trailing `x` and prints `=` followed by the factorial result.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
a=5
5x4x3x2x1=120
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **while loop**
- **Factorial calculation**
- **Multiplication sequence formatting**
- **Basic console output in C++**
