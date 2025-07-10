# Discount Based on Quantity Purchased

This C++ program calculates the amount payable for a purchase based on quantity and rate, applying a discount conditionally.

---

## 🚀 How It Works

- Prompts the user to enter:
  - Quantity (`q`)
  - Rate per unit (`r`)
- Calculates total price: `t = q * r`
- Applies discount based on quantity:
  - If quantity > 1000 → 10% discount
  - Otherwise → 5% discount
- Final amount:  
  `a = (q > 1000) ? t - 0.10 * t : t - 0.05 * t`
- Displays the amount payable
- Uses `clrscr()` to clear the screen and `getch()` to pause output (*Turbo C++ specific*)

---

## 📋 Sample Output

Quantity:1200  
Rate:10  
amount payable:10800

---

## 🛠️ How to Compile and Run

### 💻 Turbo C++ (Windows)

1. Open Turbo C++ IDE  
2. Go to **File > Open**, select your `.CPP` file  
3. **Compile > Run**

---

## 📚 Concepts Demonstrated
- **Conditional operator (`?:`)**
- **Arithmetic operations**
- **Input and output using `cin` and `cout`**
- **Basic console output in C++**
