# Student Marks, Percentage, and Division for 5 Students

This C++ program takes the name, roll number, and marks in 5 subjects for 5 students, calculates each student's total marks and percentage, and displays their division.

---

## 🚀 How It Works

- Defines a function `marks()` that:
  - Declares a `class students` with:
    - Name (`a`)
    - Roll number (`r`)
    - Marks array (`m[5]`)
    - Total marks (`t`)
    - Percentage (`p`)
  - Declares an array `st[5]` to store data for 5 students
- For each student:
  - Prompts the user to enter:
    - Name
    - Roll number
    - Marks for 5 subjects
- Calculates:
  - Total marks by summing all 5 subject marks
  - **(Note: There is a logic issue in the code: `st[i].p=st[i].m[j]*0.2;` should instead be `st[i].p=st[i].t*0.2;`)**
- Prints a formatted table displaying:
  - Roll number
  - Name
  - Total marks
  - Percentage
  - Division determined by percentage:
    - >=95 → First
    - >=85 and <95 → Second
    - >=75 and <85 → Third
    - >=33 and <75 → Fourth
    - Otherwise → Fail
- In `main()`:
  - Calls `marks()` to process all 5 students
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter name: John  
Enter Roll number: 101  
Enter Marks for subject 1: 85  
Enter Marks for subject 2: 90  
Enter Marks for subject 3: 88  
Enter Marks for subject 4: 92  
Enter Marks for subject 5: 80  
...(repeated for 4 more students)...

Roll Number   Name        Total Marks   Percentage   Division  
    101       John        435           87.00        Second  
    102       Alice       400           80.00        Third  
    103       Bob         250           50.00        Fourth  
    104       Carol       475           95.00        First  
    105       Dave        300           60.00        Fourth

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
- **Functions without return values**
- **Loops (`for`)**
- **Conditional statements (`if-else`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
