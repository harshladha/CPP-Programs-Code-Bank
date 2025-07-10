# Display Fraction Pattern and Sum of Numerators and Denominators

This C++ program displays a specific fraction pattern using numbers from 1 to 10 and calculates the sums of numerators and denominators.

---

## 🚀 How It Works

- Initializes:
  - `i = 1` (counter)
  - `r = 0` (sum of numerators)
  - `s = 0` (sum of denominators)
- Uses a `while` loop:
  - Sets `a = i` (numerator)
  - Adds `a` to `r`
  - Sets `b = a + 1` (denominator)
  - Adds `b` to `s`
  - Prints the term in the format `a/b+`
  - Increments `i` by 2
- After the loop:
  - Prints the final sum in the format `= numerator_sum / denominator_sum`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

1/2+3/4+5/6+7/8+9/10=25/30

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
- **Fraction formatting**
- **Basic console output in C++**
