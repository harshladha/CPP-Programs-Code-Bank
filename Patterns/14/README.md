# Print Continuous Number Triangle Pattern

This C++ program prints a triangle pattern of continuous increasing numbers in each row using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) runs from 1 to 15, controlling the number of rows.
- For each row:
  - The inner `for` loop (`j`) runs from 1 to `i`, printing numbers from 1 up to the current row number.
- After each row, `cout<<"\n";` moves to the next line.
- Note: Although the comment suggests continuous numbering (1–14 without resetting), this code resets `j` to 1 on each row, printing:
  - Row 1: 1
  - Row 2: 1 2
  - Row 3: 1 2 3
  - etc.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910
1234567891011
123456789101112
12345678910111213
1234567891011121314
123456789101112131415
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
- **Incremental loop control**
- **Pattern printing with numbers**
- **Basic console output in C++**
