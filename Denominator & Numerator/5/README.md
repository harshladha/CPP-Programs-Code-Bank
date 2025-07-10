# Display Series 1/10 + 2/9 + ... + 10/1 and Sum of Numerators and Denominators

This C++ program displays a fraction series where the numerator increases from 1 to 10 and the denominator decreases from 10 to 1, then calculates the sums of numerators and denominators.

---

## 🚀 How It Works

- Initializes:
  - `i = 1` (numerator counter)
  - `j = 10` (denominator counter)
  - `r = 0` (sum of numerators)
  - `s = 0` (sum of denominators)
- Uses a `while` loop:
  - Prints each fraction term as `i/j`
  - Adds `i` to `r`
  - Adds `j` to `s`
  - Increments `i`
  - Decrements `j`
- After the loop:
  - Prints the total sums in the format `= numerator_sum / denominator_sum`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

1/10+2/9+3/8+4/7+5/6+6/5+7/4+8/3+9/2+10/1=55/55

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
- **Formatted fraction output**
- **Basic console output in C++**
