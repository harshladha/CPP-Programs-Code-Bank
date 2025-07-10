# Count Vowels in a String Using Pointer

This C++ program takes a string input from the user and counts the number of vowels in it using pointer arithmetic.

---

## 🚀 How It Works

- Declares:
  - A character array `a[20]` for the string
  - A pointer `x`
  - Variables `i`, `l` (length), and `f` (vowel count)
- Prompts the user to enter a string (max 20 characters) using `cin.getline()`
- Calculates the length of the string using `strlen()`
- Initializes `x` to point to the end of the string (`x = x + l`)
- Loops backward through the string:
  - Decrements pointer `x`
  - Checks if the character pointed by `x` is a vowel (`a`, `e`, `i`, `o`, `u`)
  - If yes, increments vowel count `f`
- Prints the total number of vowels found
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter String:hello  
Number of Vowels:2

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
- **String traversal**
- **Counting characters based on condition**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
