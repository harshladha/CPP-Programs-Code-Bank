# Reverse a String Using Pointer

This C++ program takes a string input from the user and prints the string in reverse order using pointer arithmetic.

---

## 🚀 How It Works

- Declares:
  - A character array `a[20]` for the string
  - A pointer `x`
  - Variables `i` and `l` for indexing and length
- Prompts the user to enter a string (max 20 characters) using `cin.getline()`
- Calculates the length of the string using `strlen()`
- Initializes `x` to point to the end of the string (`x = x + l`)
- Loops backward through the string:
  - Decrements pointer `x`
  - Prints each character
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter String:Hello  
olleH

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
- **String reversal**
- **Using `strlen()` and `cin.getline()`**
- **Basic console output in C++**
