# Display Fractions with Denominators as Squares and Sum

This C++ program displays a fraction pattern where each term has the current number as the numerator and its square as the denominator. It also calculates the sum of numerators and denominators.

---

## 🚀 How It Works

- Prompts the user to enter a number `x`
- Initializes:
  - `i = 1` (counter)
  - `r = 0` (sum of numerators)
  - `s = 0` (sum of denominators)
- Uses a `while` loop:
  - Prints the numerator `i`
  - Calculates `j = i^2` (denominator)
  - Prints the fraction `i/j`
  - Adds `i` to `r` (numerator sum)
  - Adds `j` to `s` (denominator sum)
  - Increments `i`
- After the loop:
  - Prints the final sum in the format `= numerator_sum / denominator_sum`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

x=3  
1/1+2/4+3/9=6/14

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **While loops**
- **Using `pow()` function**
- **Cumulative addition**
- **Formatted fraction output**
- **Basic console output in C++**
