# Print All Even Numbers Between Two Given Numbers Using While Loop

This C++ program takes two integers as input and prints all even numbers between them (inclusive) using a `while` loop and `if-else` conditions.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Starting number `x`
  - Ending number `y`
- Runs a `while` loop as long as `x <= y`
  - If `x` is even (`x % 2 == 0`):
    - Prints `x`
    - Increments `x` by 2 (jumps to the next even number)
  - Else:
    - Increments `x` by 1 to reach the next even number
- Repeats until `x` exceeds `y`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

x:3
y:10

4
6
8
10

x:6
y:12

6
8
10
12

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **`while` loop**
- **`if-else` conditional logic**
- **Even number detection with `%` operator**
- **Incrementing loop control variables**
- **Basic console input and output**
