# Print Inverted Odd Number Triangle Pattern

This C++ program prints an inverted triangle pattern of increasing odd numbers in each row using nested `for` loops.

---

## 🚀 How It Works

- The outer `for` loop (`i`) starts from 9 and decrements by 2 (`i -= 2`) to control the number of elements in each row.
- For each row:
  - The inner `for` loop (`j`) starts from 1 and increments by 2 (`j += 2`), printing increasing odd numbers up to `i`.
- After printing each row, `cout<<"\n";` moves to the next line.
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
13579
1357
135
13
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
- **Incrementing and decrementing loop controls**
- **Pattern printing**
- **Basic console output in C++**
