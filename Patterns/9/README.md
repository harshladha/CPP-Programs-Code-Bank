# Print Right-Angled Triangle Pattern of Increasing Odd Numbers

This C++ program prints a right-angled triangle pattern where each row contains increasing odd numbers using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) runs from 1 to 9, incrementing by 2 (`i += 2`) to determine the maximum odd number printed per row.
- For each row:
  - The inner `for` loop (`j`) runs from 1 up to `i`, incrementing by 2 (`j += 2`), printing the odd numbers.
- After each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
1
13
135
1357
13579
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
- **Incrementing loop control with step values**
- **Pattern printing with odd numbers**
- **Basic console output in C++**
