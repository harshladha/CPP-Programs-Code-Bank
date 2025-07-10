# Display Address and Value of a Variable Using Pointer

This C++ program demonstrates how to display the address of a variable and access its value indirectly using the address-of (`&`) and dereference (`*`) operators.

---

## 🚀 How It Works

- Declares an integer variable `x` and initializes it to `2`
- Prints:
  - The address of `x` using `&x`
  - The value of `x` directly
  - The value of `x` indirectly by dereferencing `&x` using `*`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

address of x=0x61ff08  
value of x=2  
value of x=2

*(Note: The actual address will vary depending on your system)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Address-of operator (`&`)**
- **Dereference operator (`*`)**
- **Pointers basics**
- **Input and output using `cout`**
- **Basic console output in C++**
