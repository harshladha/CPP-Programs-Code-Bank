# Display Series of Powers of 10 and Cumulative Sums

This C++ program displays a series of fractions where each numerator is 10 raised to the power of `i` and the denominator is the cumulative sum of powers of 10, up to exponent 4.

---

## 🚀 How It Works

- Initializes:
  - `i = 0` (loop counter)
  - `a = 0` (stores current power of 10)
  - `b = 0` (cumulative sum of powers of 10)
  - `r = 0` (sum of numerators)
  - `s = 0` (sum of denominators)
- Uses a `while` loop (`i <= 4`) to:
  - Calculate `a = 10^i` using `pow()`
  - Print the numerator `a`
  - Add `a` to `r`
  - Increment `b` by `a` to get the cumulative denominator
  - Print the denominator `b`
  - Add `b` to `s`
  - Increment `i`
- After the loop:
  - Prints the final sums in the format `= numerator_sum / denominator_sum`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

1/1+10/11+100/111+1000/1111+10000/11111=11111/12345

*(Note: Actual sums will display as floating-point numbers.)*

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
