# Find the Largest of Three Numbers Using Conditional Operator

This C++ program determines the largest of three numbers entered by the user using nested conditional (`?:`) operators.

---

## 🚀 How It Works

- Prompts the user to enter three integers `a`, `b`, and `c`
- Uses nested conditional operator to assign the largest value to `r`:
  - If `a > b`:
    - If `a > c`, `r = a`
    - Else, `r = c`
  - Else:
    - If `b > c`, `r = b`
    - Else, `r = c`
- Prints the largest value stored in `r`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

a:5  
b:7  
c:4  
7

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Nested conditional (ternary) operator (`?:`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
