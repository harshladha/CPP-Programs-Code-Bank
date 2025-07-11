# Calculate Percentage and Division Based on Marks in 5 Subjects

This C++ program takes marks in 5 subjects and computes the total marks, percentage, and division based on the percentage achieved.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Roll number
  - Marks in English, Hindi, Maths, Science, and Social Science (Sst)
- Calculates:
  - Total marks (`t`) as the sum of all 5 subject marks
  - Percentage (`p`) as `(total / 500) * 100`
- Displays:
  - Total marks
  - Percentage
- Determines division using multiple `if` statements:
  - Percentage >=95 → "1 Div"
  - 85 to <95 → "2 Div"
  - 75 to <85 → "3 Div"
  - 33 to <75 → "4 Div"
  - Less than 33 → "FAIL"
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Roll Number:101
Marks in English:85
Hindi:90
Maths:95
Science:80
Sst:75
total=425
percentage=85
2 Div

Roll Number:102
Marks in English:40
Hindi:45
Maths:50
Science:35
Sst:30
total=200
percentage=40
4 Div

Roll Number:103
Marks in English:25
Hindi:30
Maths:20
Science:28
Sst:15
total=118
percentage=23.6
FAIL

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Arithmetic operations**
- **Percentage calculation**
- **Multiple `if` statements for range checking**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
