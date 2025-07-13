# Print Inverted Right-Angled Triangle Number Pattern

This C++ program prints an inverted right-angled triangle pattern of increasing numbers using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) runs from 5 down to 1, controlling how many numbers are printed per row.
- For each row:
  - The inner `for` loop (`j`) runs from 1 up to `i`, printing numbers in increasing order.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
12345
1234
123
12
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
- **Decrementing outer loop**
- **Pattern printing with numbers**
- **Basic console output in C++**
