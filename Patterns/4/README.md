# Print Inverted Center-Aligned Decreasing Star Pattern

This C++ program prints an inverted triangle pattern of stars (`*`) with decreasing odd counts per row using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 9 and decrements by 2 down to 1 (`i = i - 2`), determining how many stars to print per row.
- For each row:
  - The inner `for` loop (`j`) runs from 1 to `i`, printing the stars.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
*********
*******
*****
***
*
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
- **Decrementing loop by 2**
- **Pattern printing with stars**
- **Basic console output in C++**
