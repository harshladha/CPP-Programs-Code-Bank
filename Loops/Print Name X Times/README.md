# Print Name Multiple Times with Numbering

This C++ program prints a user’s name a specified number of times, each prefixed with its line number, using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter:
  - A name (`a`)
  - The number of times to print (`x`)
- Initializes:
  - `i = 1` as the loop counter
- Uses a `while` loop that runs while `i <= x`:
  - Prints the current line number (`i`) followed by the name
  - Increments `i` by 1
- After all lines are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
Enter your name:Alice
Number of times to print:3
1. Alice
2. Alice
3. Alice
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
- **String input and output**
- **Incrementing counters**
- **Basic console output in C++**
