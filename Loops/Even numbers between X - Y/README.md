# Print Even Numbers Between Two Values

This C++ program prints all even numbers between two user-specified integers using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter:
  - `x` as the starting value
  - `y` as the ending value
- Uses a `while` loop that runs while `x <= y`:
  - Checks if `x` is even (`x % 2 == 0`):
    - If even, prints `x` and increments by 2 (to jump to the next even number)
    - If odd, increments `x` by 1 (to reach the next even number)
- After all even numbers are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
x:3
y:12

4
6
8
10
12
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
- **Even number checking**
- **Conditional incrementing**
- **Basic console output in C++**
