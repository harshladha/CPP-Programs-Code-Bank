# Print Powers of 10 Pattern

This C++ program prints a sequence of numbers where each line shows a power of 10 multiplied by a constant factor using a `while` loop.

---

## 🚀 How It Works

- Initializes:
  - `a = 1` as the multiplier
  - `i = 1` as the loop counter
  - `x = 1` as the current value to print
- Uses a `while` loop that runs while `i <= 5`:
  - Prints the current value of `x`
  - Calculates `x = a * pow(10, i)` to get the next power of 10
  - Increments `i` by 1
- After printing all lines, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
10
100
1000
10000
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
- **Incrementing loop counter**
- **Pattern printing**
- **Basic console output in C++**
