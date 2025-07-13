# Calculate Sum and Average Between Two Numbers

This C++ program calculates and prints the sum and average of all integers between two user-specified numbers using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter:
  - `j` as the starting value
  - `x` as the ending value
- Initializes:
  - `i = j` as the loop counter
  - `a = 0` as the accumulator for the sum
- Uses a `while` loop that runs while `i <= x`:
  - Adds `i` to `a`
  - Increments `i` by 1
- Calculates:
  - `z = x - j` (**Note:** This formula does **not** include both endpoints correctly—see note below)
  - `b = (float)a / z` as the average
- Prints the sum and average
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## ⚠️ Important Note
The denominator `z = x - j` **does not include both ends**.  
If you want the correct count of terms, use:
```
z = (x - j) + 1;
```
For example, summing 1 to 5 should divide by 5 terms, not 4.

---

## 📋 Sample Output

```
x=1
y=5
sum of 1 to 5=15
Avg of 1 to 5=3
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **while loop**
- **Sum calculation**
- **Average calculation**
- **Incrementing counters**
- **Basic console output in C++**
