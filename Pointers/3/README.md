# Display Addresses and Values Using Single and Double Pointers

This C++ program demonstrates how to display addresses and values of variables using single (`*`) and double (`**`) pointers.

---

## 🚀 How It Works

- Declares:
  - An integer variable `x` initialized to `2`
  - An integer pointer `y`
  - A double pointer `z`
- Assigns:
  - `y = &x` (pointer to `x`)
  - `z = &y` (pointer to pointer `y`)
- Prints:
  - The address of `x` using `&x`
  - The address of `x` stored in `y`
  - The address of `x` obtained by dereferencing `z` (`*z`)
  - The address of `y` using `&y`
  - The address of `y` stored in `z`
  - The address of `z` using `&z`
  - The value of `x` using:
    - Direct access (`x`)
    - Dereferencing `*&x`
    - Dereferencing `*y`
    - Double dereferencing `**z`
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

address of x=0x61ff08  
address of x=0x61ff08  
address of x=0x61ff08  
address of y=0x61ff04  
address of y=0x61ff04  
address of z=0x61ff00  
value of x=2  
value of x=2  
value of x=2  
value of x=2

*(Note: The actual addresses will vary on your system)*

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Pointers**
- **Double pointers (`**`)**
- **Address-of operator (`&`)**
- **Dereference operator (`*` and `**`)**
- **Pointer initialization and usage**
- **Input and output using `cout`**
- **Basic console output in C++**
