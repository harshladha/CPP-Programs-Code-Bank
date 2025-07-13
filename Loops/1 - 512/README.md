# Print Powers of 2 Sequence

This C++ program prints the powers of 2 from 2⁰ to 2⁹ using a `while` loop and the `pow()` function.

---

## 🚀 How It Works

- Initializes:
  - `i = 0` as the loop counter
  - `a` to store each calculated power
- Uses a `while` loop that runs while `i <= 9`:
  - Calculates `a = pow(2, i)`
  - Prints the current value of `a`
  - Increments `i` by 1
- After printing all lines, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
2
4
8
16
32
64
128
256
512
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
- **Exponentiation sequence**
- **Basic console output in C++**
