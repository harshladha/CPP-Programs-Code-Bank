# Display Addresses and Values Using Pointers

This C++ program demonstrates how to display the address of a variable, the address of a pointer, and access the value indirectly using pointer dereferencing.

---

## 🚀 How It Works

- Declares an integer variable `x` and initializes it to `2`
- Declares an integer pointer `y`
- Assigns the address of `x` to `y` (`y = &x`)
- Prints:
  - The address of `x` using `&x`
  - The address of `x` stored in `y`
  - The address of `y` itself using `&y`
  - The value of `x` directly
  - The value of `x` using `*&x` (dereferencing address)
  - The value of `x` using `*y` (pointer dereferencing)
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

address of x=0x61ff08  
address of x=0x61ff08  
address of y=0x61ff04  
value of x=2  
value of x=2  
value of x=2

*(Note: The actual addresses will vary on different systems)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Pointers**
- **Address-of operator (`&`)**
- **Dereference operator (`*`)**
- **Pointer initialization and usage**
- **Input and output using `cout`**
- **Basic console output in C++**
