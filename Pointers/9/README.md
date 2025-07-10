# Count Words and Spaces in a String Using Pointer

This C++ program takes a string input from the user and counts the total number of characters, spaces, and words using pointer traversal.

---

## 🚀 How It Works

- Declares:
  - A character array `a[20]` for the string
  - A pointer `x`
  - Variables `i`, `l` (length), and `w` (space count)
- Prompts the user to enter a string (max 20 characters) using `cin.getline()`
- Calculates the length of the string using `strlen()`
- Initializes `x` to point to the end of the string (`x = x + l`)
- Loops backward through the string:
  - Decrements pointer `x`
  - If the character is a space (`' '`), increments `w`
- Calculates:
  - Total characters = `l`
  - Total spaces = `w`
  - Total words = `l - w` (note: this assumes no multiple spaces between words)
- Prints the results
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter String:hello world  
Total Characters:11  
Total Words:10  
Total Spaces:1

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Pointers and strings**
- **Pointer arithmetic**
- **Counting spaces in a string**
- **Basic string processing**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
