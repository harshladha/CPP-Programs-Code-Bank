# Print Addition of Increasing and Decreasing Numbers

This C++ program prints the sum of two numbers: one increasing from 0 to 10, and the other decreasing from 10 to 0, using a `while` loop.

---

## 🚀 How It Works

- Initializes:
  - `i = 0` (starts from 0 and increases)
  - `j = 10` (starts from 10 and decreases)
- Uses a `while` loop that runs while `i <= 10`:
  - Calculates the sum `s = i + j`
  - Prints the equation in the format: `i + j = s`
  - Increments `i` by 1 and decrements `j` by 1
- After all equations are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
0+10=10
1+9=10
2+8=10
3+7=10
4+6=10
5+5=10
6+4=10
7+3=10
8+2=10
9+1=10
10+0=10
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
- **Parallel increment and decrement**
- **Addition and formatted output**
- **Basic console output in C++**
