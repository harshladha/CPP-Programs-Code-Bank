# Count Positive, Negative, Even, and Odd Numbers

This C++ program accepts 10 integers from the user and counts how many of them are positive, negative, even, and odd.

---

## 🚀 How It Works

- Declares an array `a[10]` to store 10 integers
- Initializes counters:
  - `p` for positive numbers
  - `n` for negative numbers
  - `e` for even numbers
  - `o` for odd numbers
- Prompts the user to enter 10 values and stores them in the array
- Iterates through the array:
  - If a number is `>0`, increments positive count
  - If `<0`, increments negative count
  - If divisible by 2, increments even count
  - Else, increments odd count
- Prints the count of positive, negative, even, and odd numbers
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Enter 10 values  
1:5  
2:-3  
3:0  
4:7  
5:2  
6:-8  
7:9  
8:-4  
9:6  
10:1  

Positive Numbers:6  
Negative Numbers:3  
Even Numbers:5  
Odd Numbers:5  

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE
2. Go to **File > Open**, select your `.CPP` file
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Arrays**
- **Loops (`for` loop)**
- **Conditional statements (`if`)**
- **Counting occurrences**
- **Basic console output in C++**
