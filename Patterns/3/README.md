# Print Center-Aligned Increasing Star Pattern

This C++ program prints a triangle pattern of stars (`*`) in increasing odd counts per row using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 1 and increments by 2 up to 9 (`i = i + 2`), determining how many stars to print per row.
- For each row:
  - The inner `for` loop (`j`) runs from 1 to `i`, printing the stars.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
*
***
*****
*******
*********
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
- **Incrementing loop by 2**
- **Pattern printing with stars**
- **Basic console output in C++**
