# Maximum of Each Row and Column in a Matrix

This C++ program accepts a 3×3 matrix from the user and prints the maximum element in each row and each column.

---

## 🚀 How It Works

- Declares a 2D array `a[3][3]` to store the matrix
- Prompts the user to enter 9 values
- Prints the matrix in a formatted layout
- For each row:
  - Iterates over elements
  - Compares each element to `b` (initially 0)
  - Updates `b` if a larger element is found
  - Prints the maximum of the row
- For each column:
  - Iterates over elements
  - Compares each element to `c` (initially 0)
  - Updates `c` if a larger element is found
  - Prints the maximum of the column
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter values for matrix:  
1 2 3  
4 5 6  
7 8 9  

Matrix:  
1 2 3  
4 5 6  
7 8 9  

Row max of 1=3  
Row max of 2=6  
Row max of 3=9  
Col Max of 1=7  
Col Max of 2=8  
Col Max of 3=9  

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your `.CPP` file
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **2D arrays**
- **Nested `for` loops**
- **Row-wise and column-wise traversal**
- **Finding maximum elements**
- **Basic console output in C++**
