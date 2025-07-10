# Input and Print Array Elements Using Pointers (First Function Method)

This C++ program takes 10 integer values as input into an array using pointers and prints them using the first function method (no parameters, no return value).

---

## 🚀 How It Works

- Defines a function `array()`:
  - Declares an array `a[10]` and a pointer `x`
  - Initializes `x` to point to the first element of the array
  - Uses pointer `x` to input 10 values into the array
  - Resets pointer `x` to the start of the array
  - Prints all elements using pointer dereferencing
- In `main()`:
  - Calls the `array()` function
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter array  
Element 1: 10  
Element 2: 20  
Element 3: 30  
...  
Element 10: 100  

Array: 10 20 30 40 50 60 70 80 90 100

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
- **Functions without parameters and return values**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
