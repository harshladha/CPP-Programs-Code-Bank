# Search a Value in Array Using Pointer

This C++ program takes 10 elements in an array using a pointer, then searches for a specific value using pointer traversal.

---

## 🚀 How It Works

- Declares:
  - An array `a[10]`
  - A pointer `x` to traverse the array
  - A variable `s` for the search value
  - A flag `f` to track matches
- Inputs 10 values using pointer `x`
- Prompts the user to enter a search value `s`
- Traverses the array using pointer `x`:
  - Compares each element with `s`
  - If match found, increments flag `f`
- Based on `f`, prints:
  - "Found" if value exists at least once
  - "No such value exists" otherwise
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter elements of Array  
Element 1:5  
Element 2:10  
...  
Element 10:50  

Enter the value to search:10  
Found

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Pointers and arrays**
- **Pointer traversal**
- **Search logic using pointers**
- **Conditional statements (`if-else`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
