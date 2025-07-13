# Print Decreasing Odd Number Pattern

This C++ program prints a pattern of decreasing odd numbers in inverted rows using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 9 and decrements by 2 each iteration (`i -= 2`), controlling the starting number of each row.
- The inner `for` loop (`j`) starts from `i` and decrements by 2 (`j -= 2`), printing decreasing odd numbers in the row.
- After completing each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
97531
7531
531
31
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
- **Decrementing loops with step values (`i -= 2`)**
- **Pattern printing**
- **Basic console output in C++**
