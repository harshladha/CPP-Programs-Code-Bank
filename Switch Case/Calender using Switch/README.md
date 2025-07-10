# Display Formatted Date with Month Name Using Switch Statement

This C++ program accepts a date in numeric format (day, month, year) and prints it in a formatted style with the month name using a switch statement.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Day (`d`)
  - Month (`m`)
  - Year (`y`)
- Uses a `switch` statement to match the month number `m`:
  - Prints the date in the format: `dd-mon-yyyy`
  - Each case maps the month number to its 3-letter abbreviation (e.g., 1 → jan)
- If an invalid month is entered (not 1–12), prints `"invalid"`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter Date: 15  
Enter Month: 8  
Enter Year: 2024  
15-aug-2024

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Switch statements**
- **Case handling and string formatting**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
