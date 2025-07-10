# Student Marks, Percentage, and Division (Single Student)

This C++ program takes the name, roll number, and marks in 5 subjects of a single student, calculates total marks and percentage, and displays the division.

---

## 🚀 How It Works

- Defines a function `student()`:
  - Prompts the user to enter:
    - Student name
    - Roll number
    - Marks for 5 subjects
  - Calculates:
    - Total marks by summing all 5 subject marks
    - Percentage as `(total * 0.2)`
  - Prints a formatted table showing roll number, name, total marks, percentage, and division
  - Determines division based on percentage:
    - >=95 → First
    - >=85 and <95 → Second
    - >=75 and <85 → Third
    - >=33 and <75 → Fourth
    - Otherwise → Fail
- In `main()`:
  - Calls `student()` to process and display the result
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Name: John  
Enter Roll Number: 101  
Enter Marks in subject 1: 85  
Enter Marks in subject 2: 90  
Enter Marks in subject 3: 88  
Enter Marks in subject 4: 92  
Enter Marks in subject 5: 80  

Roll Number   Name   Total Marks   Percentage   Division  
    101       John   435           87.00        Second

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Functions without parameters and return values**
- **Arrays**
- **Loops (`for`)**
- **Conditional statements (`if-else`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
