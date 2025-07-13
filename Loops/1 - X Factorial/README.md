# Print Factorials from 1 to N

This C++ program calculates and prints the factorial of each number from 1 to a user-specified value using nested `while` loops.

---

## 🚀 How It Works

- Prompts the user to enter `x`, the upper limit.
- Initializes:
  - `i = 1` as the outer loop counter.
- Prints a header line: `value	factorial`
- Outer `while` loop runs while `i <= x`:
  - Prints the current number `i`.
  - Initializes:
    - `b = i` as a countdown variable for factorial multiplication.
    - `a = 1` as the factorial accumulator.
  - Inner `while` loop calculates `i!` by multiplying `a *= b` and decrementing `b`.
  - After inner loop, prints the factorial.
  - Increments `i` by 1.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
x=5
value	factorial
1	1
2	2
3	6
4	24
5	120
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Nested `while` loops**
- **Factorial computation**
- **Incrementing and decrementing counters**
- **Basic console output in C++**
