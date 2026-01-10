# Refactorable (TAU) Number Analyzer

This project is an algorithmic implementation in C designed to identify **Refactorable Numbers** (also known as TAU numbers) within the field of Number Theory.

## 🧮 Mathematical Definition

A natural number $n$ is called a **Refactorable Number** or **TAU Number** if it is divisible by the count of its divisors.

Formally, if $d(n)$ denotes the number of divisors of $n$, then $n$ is a TAU number if:

$$n \equiv 0 \pmod{d(n)}$$

### Example Analysis
* **Number:** 12
* **Divisors:** 1, 2, 3, 4, 6, 12
* **Count of Divisors ($d(n)$):** 6
* **Check:** $12 \div 6 = 2$ (Remainder 0) -> ✅ **TAU Number**

* **Number:** 15
* **Divisors:** 1, 3, 5, 15
* **Count of Divisors ($d(n)$):** 4
* **Check:** $15 \div 4 = 3.75$ (Remainder exists) -> ❌ **Not a TAU Number**

## ⚙️ How It Works

The algorithm follows a computational approach to factorization:
1.  **Input Acquisition:** Takes an integer input from the user.
2.  **Iteration & Factorization:** Loops through all integers from 1 to $n$ to identify factors.
3.  **Divisor Counting:** Accumulates the total count of positive divisors.
4.  **Modular Validation:** Applies the modulus operator (`%`) to check if the original number is divisible by the divisor count.
5.  **Result Output:** Displays detailed factorization steps and the final classification.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc tau_analyzer.c -o analyzer
    ```
2.  Run the program:
    ```bash
    ./analyzer
    ```
3.  Enter a number to verify its property.

---
*This repository demonstrates the application of control structures (loops/conditionals) and arithmetic algorithms in C.*
