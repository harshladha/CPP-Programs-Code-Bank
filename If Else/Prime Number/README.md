# Check Whether a Number is Prime Using do-while Loop

This C++ program checks whether a given number is prime using a `do-while` loop. A prime number has exactly two distinct positive divisors: 1 and itself.

---

## 🚀 How It Works

- Prompts the user to enter a number `a`
- Initializes:
  - `i = 2` to start checking for divisors
  - `f = 0` as a counter for the number of divisors found
- Uses a `do-while` loop:
  - Calculates `r = a % i` (remainder)
  - If `r == 0`, increments `f`
  - Increments `i`
  - Repeats until `i <= a`
- After the loop:
  - If `f == 1`, the number has only one divisor other than itself → **Prime**
  - Else, prints **Non-prime**
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

```
a=7
Prime
```

```
a=9
Non-prime
```

```
a=2
Prime
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **do-while loop**
- **Prime number logic using divisibility**
- **Modulo operator (`%`)**
- **Conditional counting**
- **Input and output using `cin` and `cout`**
