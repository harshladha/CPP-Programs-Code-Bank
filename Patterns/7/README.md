# Print Inverted Right-Angled Triangle Pattern with Decreasing Numbers

This C++ program prints an inverted right-angled triangle pattern where each row displays decreasing numbers starting from the current row number down to 1.

---

## 🚀 How It Works

- The outer `for` loop (`i`) runs from 5 down to 1, determining how many numbers to print per row.
- For each row:
  - The inner `for` loop (`j`) starts from `i` and decrements to 1, printing numbers in descending order.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
54321
4321
321
21
1
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
- **Decrementing loops**
- **Pattern printing with numbers in descending order**
- **Basic console output in C++**
