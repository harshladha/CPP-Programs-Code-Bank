# Print Inverted Odd Number Pyramid Pattern

This C++ program prints an inverted pyramid pattern of decreasing odd numbers using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 1 and increments by 2 up to 9 (`i += 2`), controlling how many numbers to print per row.
- For each row:
  - The inner `for` loop (`j`) starts from 9 and decrements by 2 down to `i`, printing the numbers in decreasing order.
- After completing each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
97531
9753
975
97
9
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
- **Incrementing and decrementing loop controls**
- **Pattern printing**
- **Basic console output in C++**
