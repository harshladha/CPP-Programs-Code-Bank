# Print Squares and Cubes from 1 to N

This C++ program calculates and prints the square and cube of each number from 1 to a user-specified value using a `while` loop.

---

## 🚀 How It Works

- Prompts the user to enter `x`, the upper limit.
- Initializes:
  - `i = 1` as the loop counter.
- Prints a header line: `Value	Square	Cube`
- Uses a `while` loop that runs while `i <= x`:
  - Prints the current number `i`.
  - Calculates the square: `s = pow(i,2)`
  - Calculates the cube: `c = pow(i,3)`
  - Prints `s` and `c` separated by tabs.
  - Increments `i` by 1.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
x=5
Value	Square	Cube
1	1	1
2	4	8
3	9	27
4	16	64
5	25	125
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
- **Power function (`pow()`)**
- **Calculating squares and cubes**
- **Tabular output formatting**
- **Basic console output in C++**
