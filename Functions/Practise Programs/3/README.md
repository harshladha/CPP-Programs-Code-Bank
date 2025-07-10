# Student Marks, Percentage, and Division for 5 Students (Parameter Without Return)

This C++ program takes the name, roll number, and marks in 5 subjects for 5 students, calculates total marks and percentage for each, and displays the results in a table using a function with parameters and no return value.

---

## 🚀 How It Works

- Defines a `struct student` containing:
  - `a[20]`: student name
  - `r`: roll number
  - `m[5]`: marks array
  - `t`: total marks
  - `p`: percentage
- In `main()`:
  - Declares an array `st[5]` to store 5 students
  - For each student:
    - Prompts the user to enter name, roll number, and 5 subject marks
  - Calls `marks(st)` to process and print results
- Defines `marks()`:
  - Receives the array of student structures
  - For each student:
    - Calculates total marks by summing 5 subject marks
    - Calculates percentage (`p = total * 0.2`)
    - Prints roll number, name, total marks, and percentage in tabular form
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Name: John  
Enter Roll Number: 101  
Enter Marks in Subject 1:85  
Enter Marks in Subject 2:90  
Enter Marks in Subject 3:88  
Enter Marks in Subject 4:92  
Enter Marks in Subject 5:80  
... *(repeats for 4 more students)*  

Roll Number   Name        Total Marks   Percentage  
101           John            435           87  
...           ...             ...           ...

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Structures**
- **Functions with parameters and no return value**
- **Arrays**
- **Loops (`for`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
