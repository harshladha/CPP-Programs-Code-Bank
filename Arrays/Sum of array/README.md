# Sum of 10 User-Entered Values

This C++ program accepts 10 integers from the user, stores them in an array, and calculates their total sum using a `while` loop.

---

## 🚀 How It Works

- Declares an array `a[10]` to store 10 integers
- Initializes:
  - `i = 1` (loop counter)
  - `r = 0` (sum accumulator)
- Uses `while(i <= 10)` to:
  - Prompt the user to enter a value
  - Store it in the array
  - Add it to `r`
  - Increment `i`
- Prints the total sum of all entered values
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter value 1=3  
Enter value 2=5  
Enter value 3=7  
Enter value 4=2  
Enter value 5=6  
Enter value 6=1  
Enter value 7=4  
Enter value 8=9  
Enter value 9=8  
Enter value 10=0  
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
- **While loops**
- **Input and accumulation**
- **Basic console output in C++**
