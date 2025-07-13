# Print Powers of 2 in Reverse Order

This C++ program prints the powers of 2 in descending order from 2⁹ down to 2⁰ using a `while` loop and the `pow()` function.

---

## 🚀 How It Works

- Initializes:
  - `i = 9` as the starting exponent.
- Uses a `while` loop that runs while `i >= 0`:
  - Calculates `a = pow(2, i)`
  - Prints the value of `a`
  - Decrements `i` by 1
- After all powers are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
512
256
128
64
32
16
8
4
2
1
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
- **Decrementing loop counter**
- **Basic console output in C++**
