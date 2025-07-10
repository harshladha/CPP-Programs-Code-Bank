# Calculate Total Marks and Percentage of 5 Students Using Class

This C++ program takes the name, roll number, and marks in 5 subjects for 5 students, then calculates and displays each student's total marks and percentage.

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
    - Prompts the user to enter roll number and name
    - Prompts the user to enter marks in 5 subjects
  - For each student:
    - Calculates the total marks by summing all 5 subject marks
    - Calculates the percentage as `total * 0.2`
    - Prints the roll number, name, total marks, and percentage in a tabular format
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Roll Number:101  
Enter Name of Roll Number 101:John  
Enter Marks of John in Subject 1:80  
Enter Marks of John in Subject 2:85  
Enter Marks of John in Subject 3:90  
Enter Marks of John in Subject 4:75  
Enter Marks of John in Subject 5:88  
...(repeats for 4 more students)...

Rollno.   Name     Total Marks   Percentage  
101       John     418           83.6%  
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
- **Input and output using `cin` and `cout`**
- **Basic arithmetic calculations**
- **Basic console output in C++**
