# Print Center-Aligned Increasing Number Triangle Pattern

This C++ program prints a pattern of increasing numbers in each row using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 1 and increments by 2 up to 9 (`i += 2`) to control how many numbers to print in each row.
- For each row:
  - The inner `for` loop (`j`) starts from 1 and increments by 1 up to `i`, printing numbers in increasing order.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
123
12345
1234567
123456789
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
