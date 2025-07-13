# Print Right-Angled Triangle Star Pattern

This C++ program prints a right-angled triangle pattern made of asterisks (`*`) using nested `for` loops.

---

## 🚀 How It Works

- Uses an outer `for` loop (`i`) that runs from 1 to 5 to control the number of rows.
- For each row:
  - An inner `for` loop (`j`) runs from 1 to `i` to print the required number of asterisks.
- After printing each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
*
**
***
****
*****
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
- **Pattern printing**
- **Basic console output in C++**
