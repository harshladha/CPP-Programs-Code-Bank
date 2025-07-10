# Display Harmonic Series Pattern and Sum of Denominators

This C++ program displays a harmonic-like pattern up to a user-entered number and calculates the sum of the denominators (integers from 1 to x).

---

## 🚀 How It Works

- Prompts the user to enter a number `x`
- Initializes:
  - `i = 1` (counter)
  - `s = 0` (accumulator for the sum)
- Uses a `while` loop:
  - Prints terms in the format `1/1 + 1/2 + ...`
  - Adds `i` to `s` during each iteration
  - Increments `i` until it exceeds `x`
- After the loop, prints the final expression as `= 1/s`
- Uses `\b` to backspace the last `+` and format the output cleanly
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

x=5  
1/1+1/2+1/3+1/4+1/5=1/15

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **While loops**
- **Cumulative addition**
- **Formatted output**
- **Basic console output in C++**
