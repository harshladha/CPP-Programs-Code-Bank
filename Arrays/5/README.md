# Multiply Two Matrices Element-wise

This C++ program accepts two 3×3 matrices from the user, multiplies them element by element, and stores the result in a third matrix.

---

## 🚀 How It Works

- Declares three 3×3 matrices: `a`, `b`, and `c`
- Prompts the user to enter values for Matrix 1
- Prompts the user to enter values for Matrix 2
- Uses nested `for` loops to:
  - Multiply corresponding elements of Matrix 1 and Matrix 2
  - Store the result in Matrix 3 (`c[i][j] = a[i][j] * b[i][j]`)
- Prints the resulting matrix
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Matrix 1  
1 2 3  
4 5 6  
7 8 9  

Enter Matrix 2  
9 8 7  
6 5 4  
3 2 1  

Matrix 1 x Matrix 2  
9 16 21  
24 25 24  
21 16 9  

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
- **Element-wise matrix operations**
- **Basic console output in C++**
