# Basic Arithmetic Operations Using Switch Statement

This C++ program takes two numbers and performs an operation selected by the user (sum, subtraction, multiplication, division, average, minimum, or maximum) using a switch statement.

---

## 🚀 How It Works

- Prompts the user to enter two numbers `a` and `b`
- Displays a menu of operations:
  - 1 → Sum
  - 2 → Subtraction
  - 3 → Multiplication
  - 4 → Division
  - 5 → Average
  - 6 → Minimum
  - 7 → Maximum
- Prompts the user to enter a choice `c`
- Uses a `switch` statement to perform the selected operation:
  - For minimum and maximum, uses `if` statements inside `case`
  - Prints the result of the operation
  - If the choice is invalid, prints "invalid"
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter a:5  
Enter b:3  
Operations to perform  
1).Sum  
2).Sub  
3).Multiplication  
4).Division  
5).Average  
6).Minimum  
7).Maximum  
Enter your choice of operation:3  
Result=15

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Switch statements**
- **Arithmetic operations**
- **Conditional checks inside switch cases**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
