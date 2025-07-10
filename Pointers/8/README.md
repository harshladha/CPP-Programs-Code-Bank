# Count Each Vowel in a String Using Pointer

This C++ program takes a string input from the user and counts the occurrences of each vowel (`a`, `e`, `i`, `o`, `u`) separately using pointer traversal.

---

## 🚀 How It Works

- Declares:
  - A character array `a[20]` for the string
  - A pointer `x`
  - Variables `i` and `l` (length)
  - Counters `fa`, `fe`, `fi`, `fo`, `fu` for each vowel
- Prompts the user to enter a string (max 20 characters) using `cin.getline()`
- Calculates the length of the string using `strlen()`
- Initializes `x` to point to the end of the string (`x = x + l`)
- Loops backward through the string:
  - Decrements pointer `x`
  - Checks if the character pointed by `x` matches each vowel (both lowercase and uppercase)
  - Increments the corresponding vowel counter
- Prints the count of each vowel separately
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter string:education  
Vowel Count  
a=1  
e=1  
i=0  
o=1  
u=1

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
- **Case-insensitive character comparison**
- **Counting occurrences of specific characters**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
