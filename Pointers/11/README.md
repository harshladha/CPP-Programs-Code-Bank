# Input and Print Array Elements Using Pointers (Third Function Method)

This C++ program takes 10 integer values as input into an array and prints them using pointers in a function with parameters (third function method).

---

## 🚀 How It Works

- In `main()`:
  - Declares an integer array `a[10]`
  - Prompts the user to enter 10 elements
  - Calls the `array(a)` function, passing the array as an argument
- Defines a function `array(int a[])`:
  - Declares a pointer `x`
  - Initializes `x` to the start of the array
  - Prints the elements of the array using pointer dereferencing
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter array  
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
- **Functions with parameters**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
