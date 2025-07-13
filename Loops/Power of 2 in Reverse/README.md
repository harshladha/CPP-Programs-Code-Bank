# Print Halving Sequence Down to 1

This C++ program prints a sequence where each value is half of the previous one (with adjustments) until it reaches 1, using a `while` loop.

---

## 🚀 How It Works

- Initializes:
  - `a = 1024` as the starting number.
- Uses a `while` loop that runs while `a >= 1`:
  - Updates `a = a - (a / 2)`:
    - This subtracts half of the current `a` (i.e., reducing it by 50% each step).
  - Prints the new value of `a`.
  - Decrements `a` by 1 to eventually terminate the loop.
- After all numbers are printed, `getch()` waits for a keypress.
- Uses `clrscr()` to clear the screen (*Turbo C++ specific*).

---

## 📋 Sample Output

```
512
255
126
62
30
14
6
2
0
```

✅ *Note:* This output may be unexpected because after `a = a - a/2`, `a--` is applied, leading to non-exact halving.  
If you want exactly 512, 256, 128...1, the code should be:

```cpp
int a = 512;
while (a >= 1) {
  cout << a << "\n";
  a = a / 2;
}
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **while loop**
- **Integer division**
- **Decrementing loop values**
- **Basic console output in C++**
