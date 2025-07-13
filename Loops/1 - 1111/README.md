# Print Increasing Pattern with Powers of 10

This C++ program prints a pattern where each line shows the previous value plus the next power of 10 using a `while` loop.

---

## 🚀 How It Works

- Initializes:
  - `a = 1` (not used in the calculation but declared)
  - `x = 1` as the starting number
  - `i = 1` as the loop counter
- Uses a `while` loop that runs while `i <= 4`:
  - Prints the current value of `x`
  - Updates `x = x + pow(10, i)` to add the next power of 10 to `x`
  - Increments `i` by 1
- After printing all lines, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
11
111
1111
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
- **Incremental pattern generation**
- **Basic console output in C++**
