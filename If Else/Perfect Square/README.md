# Check Whether a Number is a Perfect Square Using do-while Loop

This C++ program checks whether a given number is a perfect square using a `do-while` loop and the `pow()` function.

---

## 🚀 How It Works

- Prompts the user to enter a number `a`
- Initializes:
  - `i = 1` to start checking squares from 1²
  - `f = 0` as a flag to track if a perfect square match is found
- Runs a `do-while` loop:
  - Calculates `r = pow(i,2)`
  - If `r == a`, sets `f = 1`
  - Increments `i`
  - Continues until `i <= a`
- After the loop:
  - If `f == 1`, prints `"Perfect"`
  - Otherwise, prints `"Not Perfect"`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

```
a=25
Perfect
```

```
a=20
Not Perfect
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
- **Perfect square checking**
- **Power function (`pow()`)**
- **Flag variable logic**
- **Input and output using `cin` and `cout`**
