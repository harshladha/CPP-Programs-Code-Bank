# Print Fibonacci Series up to a Given Value

This C++ program prints the Fibonacci sequence up to a user-specified ending value using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter an integer `b` as the maximum value.
- Initializes:
  - `a = 0` (holds the previous value)
  - `c = 1` (holds the current value)
  - `d = 0` (holds the next value to print)
- Uses a `while` loop that runs while `d <= b`:
  - Prints `d`
  - Updates variables to prepare the next Fibonacci number:
    - `a = c`
    - `c = d`
    - `d = a + c`
- After printing all Fibonacci numbers, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
Enter the ending value:20
0
1
1
2
3
5
8
13
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
- **Fibonacci sequence generation**
- **Variable swapping and summation**
- **Basic console output in C++**
