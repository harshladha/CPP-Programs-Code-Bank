# Calculate Total Amount with Conditional Discount

This C++ program calculates the total amount payable for purchasing an item based on quantity and rate, applying a conditional discount.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Quantity (`q`)
  - Rate per unit (`r`)
- Calculates total amount without discount: `t = q * r`
- Applies discount:
  - If quantity > 1000, 10% discount (`a = t - 0.10 * t`)
  - Otherwise, 5% discount (`a = t - 0.05 * t`)
- Prints the final amount payable
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Quantity:1200  
Rate:50  
amount payable:54000

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Conditional statements (`if-else` equivalent using conditional operator)**
- **Arithmetic operations**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
