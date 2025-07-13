# Print Multiplication Table of a Number

This C++ program prints the multiplication table of a user-specified number from 1 to 10 using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter `x`, the number whose table is to be printed.
- Initializes:
  - `a = 1` as the multiplier.
- Uses a `while` loop that runs while `a <= 10`:
  - Calculates the product `r = a * x`.
  - Prints the result.
  - Increments `a` by 1.
- After printing the table, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
Enter value of x:5

5
10
15
20
25
30
35
40
45
50
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
- **Multiplication table generation**
- **Incrementing counters**
- **Basic console output in C++**
