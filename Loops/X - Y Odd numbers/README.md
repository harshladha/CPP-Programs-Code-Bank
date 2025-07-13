# Print Odd Numbers Between Two Values

This C++ program prints all odd numbers between two user-specified integers using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter:
  - `a` as the starting value
  - `b` as the ending value
- Uses a `while` loop that runs while `a <= b`:
  - Checks if `a` is odd (`a % 2 == 1`):
    - If odd, prints `a` and increments `a` by 2 (to jump directly to the next odd number)
    - If even, increments `a` by 1 (to get to the next odd)
- After all odd numbers are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
a=3
b=10

3
5
7
9
```

```
a=4
b=10

5
7
9
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
- **Odd number checking**
- **Conditional incrementing**
- **Basic console output in C++**
