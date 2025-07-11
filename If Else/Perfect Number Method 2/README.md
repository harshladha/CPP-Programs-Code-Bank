# Check Whether a Number is a Perfect Number Using do-while Loop

This C++ program checks whether a given number is a perfect number using a `do-while` loop.

---

## 🚀 How It Works

- Prompts the user to enter a number `a`
- Initializes:
  - `i = a` to start checking from the number itself down to 2
  - `d = 0` as a sum accumulator for divisors
- Uses a `do-while` loop to:
  - If `i` divides `a` evenly (`a % i == 0`), computes `r = a / i`
  - Adds `r` to the divisor sum `d`
  - Decrements `i` by 1
  - Repeats until `i > 1`
- After the loop:
  - If `d == a`, prints `"Perfect Number"`
  - Otherwise, prints `"Not Perfect"`
- **Note:** A perfect number is one where the sum of its proper divisors equals the number itself (e.g., 6 = 1+2+3).
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

a=6
Perfect Number

a=10
Not Perfect

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **`do-while` loop**
- **Perfect number checking**
- **Division and modulus operations**
- **Accumulator pattern for summing divisors**
- **Input and output using `cin` and `cout`**
