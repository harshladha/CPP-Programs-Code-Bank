# Check Whether a Number is a Palindrome

This C++ program checks whether a given integer is a palindrome by reversing its digits and comparing the result to the original number.

---

## 🚀 How It Works

- Prompts the user to enter a number `a`.
- Initializes:
  - `s = 0` to store the reversed number
  - `rr = a` to keep a copy of the original number
- Uses a `do-while` loop:
  - Extracts the last digit `r = a % 10`
  - Updates the reversed number `s = s * 10 + r`
  - Removes the last digit from `a` by `a = a / 10`
- Repeats until `a` becomes 0.
- Compares the reversed number `s` with the original `rr`:
  - If equal, prints "Palindrome"
  - Otherwise, prints "Not Palindrome"
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*).

---

## 📋 Sample Output

```
a=121
Palindrome
```

```
a=123
Not Palindrome
```

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **do-while loop**
- **Reversing a number**
- **Palindrome checking**
- **Basic console output in C++**
