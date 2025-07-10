# Sum of Array Elements Using Function with Parameters (No Return Value)

This C++ program takes 10 integer values from the user, stores them in an array, and calculates their total sum using a function that accepts the array as a parameter and does not return a value.

---

## 🚀 How It Works

- In `main()`:
  - Declares an integer array `a[10]`
  - Prompts the user to enter 10 elements
  - Calls `array(a)` to calculate and display the sum
- The function `array(int a[])`:
  - Initializes `t = 0`
  - Iterates over the array elements
  - Adds each element to `t`
  - Prints the total sum
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter element 1:5  
Enter element 2:3  
Enter element 3:7  
Enter element 4:2  
Enter element 5:8  
Enter element 6:4  
Enter element 7:1  
Enter element 8:6  
Enter element 9:9  
Enter element 10:0  
Total=45

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Arrays**
- **Functions with parameters**
- **No return value (`void`)**
- **Loops (`for`)**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
