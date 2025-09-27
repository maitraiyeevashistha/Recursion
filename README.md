# Recursion in C++

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: Understanding Recursion in C++

-----

## Aim

*To understand and implement recursion in C++ by solving common problems such as:*

- Sum of first **N** natural numbers  
- Factorial of a number  
- Reversing a number  
- Reversing a string

---

## Objectives
- Learn the fundamental concept of recursion and how it works in programming.  
- Implement recursive functions for mathematical and string operations.  
- Compare recursion with iteration in terms of **memory usage, execution time, and readability**.  
- Explore real-life and industrial applications of recursion.  

---

## Tools Used
- **Editor**: Visual Studio Code (VS Code)  
- **Language**: C++  

---

##  Theory

### What is Recursion?
Recursion is a programming technique where a function calls itself (directly or indirectly) to solve smaller subproblems of the same type. This process continues until a **base case** is reached, preventing infinite execution. After hitting the base case, the function stack unwinds and the solution is combined step by step.

### Key Components
1. **Base Case** – The stopping condition of recursion.  
2. **Recursive Case** – The part where the function calls itself with a smaller input.  
3. **Parameters** – Values passed at each recursive call, reduced step by step.  

### How Recursion Works (Stack Mechanism)
Each call is placed on the **function call stack**. Memory is allocated for parameters, local variables, and return addresses. Once the base case is reached, the stack **unwinds**, returning results in reverse order.  

**Example: sum(3)**  
```
sum(3) → 3 + sum(2)  
sum(2) → 2 + sum(1)  
sum(1) → 1 + sum(0)  
sum(0) → 0 (base case)  
```
Final result = 6  

---

##  Advantages
- Simplifies code for problems like tree traversals, factorial, Fibonacci, string reversal.  
- Provides clean and elegant solutions.  
- Naturally fits hierarchical or nested problems.  

##  Disadvantages
- Consumes more memory (due to stack usage).  
- Risk of **stack overflow** if base case is missing or input is too large.  
- Iterative solutions can sometimes be faster and more efficient.  

---

##  Recursion vs Iteration

| Feature             | Recursion | Iteration |
|---------------------|-----------|-----------|
| Memory Usage        | Higher    | Lower |
| Performance         | Slightly slower | Faster |
| Understandability   | Easier for hierarchical tasks | Easier for simple loops |
| Termination         | Requires base case | Requires loop condition |
| Use Case            | Trees, graphs, backtracking | Counting, array processing |

---

##  Algorithms & Code

### 1. Sum of N Numbers (Recursive)
 - Start
 - Read n
 - If n < 0, print error
 - If n == 0, return 0
 - Else return n + sumup(n-1)
 - Print result
 - End

### 2. Factorial of a Number (Recursive)
 - Start
 - Read n
 - If n < 0, print error
 - If n == 0 or n == 1, return 1
 - Else return n * fact(n-1)
 - Print result
 - End

### 3. Reverse a Number (Recursive)
 - Start
 - Read num
 - If num == 0, return 0
 - Else last_digit = num % 10
 - Print last_digit
 - Call reverse(num/10)
 - End

### 4. Reverse a String (Recursive)
 - Start
 - Read string str
 - If index < 0, return ""
 - Else return str[index] + reverse(str, index-1)
 - Print result
 - End

---
## Conclusion
This experiment demonstrated how recursion works in C++ by solving problems like sum, factorial, and reversals. We saw that recursion simplifies problem-solving by breaking tasks into smaller subproblems, though it requires a base case to prevent infinite calls. Compared with iteration, recursion is often clearer and closer to mathematical logic but uses more memory and can be slower. Overall, recursion is a powerful tool for problems involving repetitive or hierarchical structures.
