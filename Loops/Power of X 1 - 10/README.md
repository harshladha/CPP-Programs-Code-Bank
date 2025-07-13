# Print Powers of a Number up to 10

This C++ program prints the first 10 powers of a user-specified base number using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter `x`, the base number.
- Initializes:
  - `i = 1` as the exponent counter.
- Prints the header row: `Value   Power   Result`.
- Uses a `while` loop that runs while `i <= 10`:
  - Calculates `r = pow(x, i)` to compute `x` raised to the `i`th power.
  - Prints the base, exponent, and result in tabular format.
  - Increments `i` by 1.
- After all powers are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
x=2
Value   Power   Result
2       1       2
2       2       4
2       3       8
2       4       16
2       5       32
2       6       64
2       7       128
2       8       256
2       9       512
2       10      1024
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
- **Power function (`pow()`)**
- **Formatted tabular output**
- **Basic console output in C++**
