# Input and Print Array Elements Using Pointer

This C++ program takes 10 integer values as input into an array using a pointer and prints them by traversing the array with pointer arithmetic.

---

## 🚀 How It Works

- Declares:
  - An integer array `a[10]`
  - An integer pointer `x`
- Initializes `x` to point to the start of the array (`&a[0]`)
- Inputs elements:
  - Loops 10 times
  - Stores input at the location pointed by `x`
  - Increments `x` to point to the next element
- Resets `x` back to the start of the array
- Outputs elements:
  - Loops 10 times
  - Prints the value pointed by `x`
  - Increments `x` to traverse the array
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter elements of Array  
Element 1:10  
Element 2:20  
Element 3:30  
...  
Element 10:100  

Array:10 20 30 40 50 60 70 80 90 100

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Pointers and arrays**
- **Pointer arithmetic**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
