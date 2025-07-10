# Student Marks, Percentage, and Division for 5 Students Using Class

This C++ program takes the name, roll number, and marks in 5 subjects for 5 students, then calculates each student's total marks, percentage, and division, and displays them in a tabular format.

---

## 🚀 How It Works

- Defines a class `student` with:
  - `a[20]`: name
  - `r`: roll number
  - `m[5]`: array to store marks in 5 subjects
  - `t`: total marks
  - `p`: percentage
- In `main()`:
  - Declares an array `st[5]` of `student` to store data of 5 students
  - For each student:
    - Prompts the user to enter name, roll number, and marks in 5 subjects
  - Calculates:
    - Total marks by summing the marks array
    - Percentage as `total * 0.2`
  - Prints a formatted table showing roll number, name, total marks, percentage, and division
  - Determines division based on percentage:
    - >=95 → First
    - >=85 and <95 → Second
    - >=75 and <85 → Third
    - >=33 and <75 → Fourth
    - Otherwise → Fail
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Name: John  
Enter Roll Number:101  
Enter Marks in Subject 1:80  
Enter Marks in Subject 2:85  
Enter Marks in Subject 3:90  
Enter Marks in Subject 4:75  
Enter Marks in Subject 5:88  
...(repeats for 4 more students)...

Roll Number   Name      Total Marks   Percentage   Division  
    101       John      418           83.6         Third  
...(other students)...

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Classes**
- **Arrays of objects**
- **Loops (`for`)**
- **Conditional statements (`if-else`)**
- **Using `setprecision()`**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
