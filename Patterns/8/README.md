# Print Inverted Triangle Pattern with Fixed Starting Number

This C++ program prints an inverted triangle pattern where each row starts from 5 and decrements to the current row index using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) runs from 1 to 5, determining how many numbers to print in each row.
- For each row:
  - The inner `for` loop (`j`) starts from 5 and decrements down to `i`, printing numbers in descending order.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
54321
5432
543
54
5
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Nested `for` loops**
- **Decrementing inner loop**
- **Pattern printing with numbers in descending order**
- **Basic console output in C++**
