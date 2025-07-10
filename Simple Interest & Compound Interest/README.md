# Simple Interest and Compound Interest Calculator

This C++ program calculates and prints the Simple Interest (SI) and Compound Interest (CI) for a given principal amount, interest rate, and time period.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Principal amount (`a`)
  - Interest rate (`r`)
  - Number of years (`y`)
- Calculates:
  - Simple Interest: `s = (a * r * y) / 100`
  - Compound Interest: `c = a * (1 + r / 100)^y - a`
- Prints the values of SI and CI
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

enter amount:1000  
enter rate:5  
enter year:2  
SI=100  
CI=102.5

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Input and output using `cin` and `cout`**
- **Simple arithmetic calculations**
- **Using `pow()` function**
- **Basic console output in C++**
