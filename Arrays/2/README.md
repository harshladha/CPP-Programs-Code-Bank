# Search a Value in an Array

This C++ program accepts 10 integers from the user and searches for a specific value entered by the user.

---

## 🚀 How It Works

- Declares an array `a[10]` to store 10 integers
- Prompts the user to enter 10 values
- Asks the user for the value `x` to search
- Iterates through the array:
  - If any element equals `x`, increments the count `c`
- After the loop:
  - If `c >= 1`, prints "Found"
  - Else, prints "Not Found"
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter 10 values  
1:5  
2:3  
3:7  
4:1  
5:8  
6:2  
7:9  
8:4  
9:6  
10:0  
Enter the value for searching:7  
Found

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your `.CPP` file
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Arrays**
- **Loops (`for` loop)**
- **Conditional statements (`if`)**
- **Counting occurrences**
- **Basic console output in C++**
