# Calculate Total Marks and Percentage Using Class

This C++ program takes the name, roll number, and marks in 5 subjects of a student, then calculates and displays the total marks and percentage using a class.

---

## 🚀 How It Works

- Defines a class `student` with:
  - `a[20]`: name
  - `r`: roll number
  - `m[5]`: array to store marks in 5 subjects
  - `t`: total marks
  - `p`: percentage
- In `main()`:
  - Declares an object `st1` of type `student`
  - Prompts the user to enter the student's name, roll number, and marks
  - Calculates the total marks by summing all 5 subject marks
  - Calculates the percentage as `total * 0.2`
  - Prints the total marks and percentage
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Name: John  
Roll Number: 101  
Subject 1:80  
Subject 2:90  
Subject 3:85  
Subject 4:75  
Subject 5:88  
Total Marks:418  
Total Percentage:83.6

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Classes**
- **Arrays**
- **Loops (`for`)**
- **Input and output using `cin` and `cout`**
- **Basic arithmetic calculations**
- **Basic console output in C++**
