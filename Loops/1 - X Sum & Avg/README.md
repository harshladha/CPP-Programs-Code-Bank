# Calculate Sum and Average Between Two Numbers

This C++ program calculates and prints the sum and average of all integers between two user-specified numbers using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter two integers:
  - `j` as the starting value
  - `x` as the ending value
- Initializes:
  - `i = j` as the loop counter
  - `a = 0` as the accumulator for the sum
- Uses a `while` loop that runs while `i <= x`:
  - Adds `i` to `a`
  - Increments `i` by 1
- Calculates:
  - `z = x - j` (used as the divisor in the average)
  - `b = (float)a / z` as the average (*Note: this formula does not include the +1 in the count, so the denominator should technically be `x - j + 1`*)
- Prints the sum and average.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

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
- **Incrementing loop counters**
- **Basic console output in C++**
