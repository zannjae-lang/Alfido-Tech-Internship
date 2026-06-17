# Algorithms and Problem Solving using C++

## Overview

This project was developed as part of the internship assignment to demonstrate the implementation and analysis of fundamental algorithms in C++. The objective is to understand algorithm design techniques, evaluate performance, and analyze time complexity through practical implementation.

The project includes the implementation of:

* Merge Sort (Divide and Conquer)
* Binary Search (Searching Algorithm)
* 0/1 Knapsack Problem (Dynamic Programming)

Each algorithm accepts user input, executes the required operation, and measures execution time using the C++ Chrono Library.

---

## Objectives

* Understand different algorithm design paradigms.
* Implement efficient searching and sorting techniques.
* Apply dynamic programming to optimization problems.
* Analyze time and space complexity.
* Measure algorithm runtime using practical test cases.
* Strengthen problem-solving skills using C++.

---

## Technologies Used

* C++
* GNU G++ Compiler
* Visual Studio Code
* Windows Command Prompt
* GitHub

Compiler Version:

```text
g++ (MinGW-W64) 15.2.0
```

---

## Project Structure

```text
Algorithms/
│
├── MergeSort/
│   └── mergesort.cpp
│
├── BinarySearch/
│   └── binarysearch.cpp
│
├── Knapsack/
│   └── knapsack.cpp
│
├── screenshots/
│
└── README.md
```

---

# 1. Merge Sort

## Description

Merge Sort is a Divide and Conquer algorithm that recursively divides the array into smaller subarrays and then merges them in sorted order.

### Algorithm Steps

1. Divide the array into two halves.
2. Recursively sort both halves.
3. Merge the sorted halves.

### Time Complexity

| Case         | Complexity |
| ------------ | ---------- |
| Best Case    | O(n log n) |
| Average Case | O(n log n) |
| Worst Case   | O(n log n) |

### Space Complexity

```text
O(n)
```

### Sample Input

```text
7
38 27 43 3 9 82 10
```

### Sample Output

```text
Sorted Array:
3 9 10 27 38 43 82

Execution Time: 15 microseconds
```

---

# 2. Binary Search

## Description

Binary Search is an efficient searching algorithm that works on sorted arrays by repeatedly dividing the search interval into half.

### Algorithm Steps

1. Find the middle element.
2. Compare with target value.
3. Search left or right half accordingly.
4. Repeat until element is found or interval becomes empty.

### Time Complexity

| Case         | Complexity |
| ------------ | ---------- |
| Best Case    | O(1)       |
| Average Case | O(log n)   |
| Worst Case   | O(log n)   |

### Space Complexity

```text
O(1)
```

### Sample Input

```text
6
10 20 30 40 50 60
40
```

### Sample Output

```text
Element found at index 3

Execution Time: 1 microsecond
```

---

# 3. 0/1 Knapsack Problem

## Description

The 0/1 Knapsack Problem is a classic Dynamic Programming problem where the goal is to maximize total profit while staying within a specified weight capacity.

Each item can either be selected completely or not selected at all.

### Algorithm Steps

1. Create a DP table.
2. Compare including and excluding each item.
3. Store maximum profit at each stage.
4. Return the optimal solution.

### Time Complexity

| Case                | Complexity |
| ------------------- | ---------- |
| Dynamic Programming | O(nW)      |

Where:

* n = Number of items
* W = Knapsack capacity

### Space Complexity

```text
O(nW)
```

### Sample Input

```text
3
60 100 120
10 20 30
50
```

### Sample Output

```text
Maximum Profit = 220

Execution Time: 5 microseconds
```

---

## Compilation Commands

### Merge Sort

```bash
g++ MergeSort\mergesort.cpp -o MergeSort\mergesort.exe
```

### Binary Search

```bash
g++ BinarySearch\binarysearch.cpp -o BinarySearch\binarysearch.exe
```

### Knapsack

```bash
g++ Knapsack\knapsack.cpp -o Knapsack\knapsack.exe
```

---

## Execution Commands

### Merge Sort

```bash
MergeSort\mergesort.exe
```

### Binary Search

```bash
BinarySearch\binarysearch.exe
```

### Knapsack

```bash
Knapsack\knapsack.exe
```

---

## Runtime Analysis

The execution time was measured using the C++ Chrono Library.

Example:

| Input Size | Merge Sort              |
| ---------- | ----------------------- |
| 100        | Measured During Testing |
| 1,000      | Measured During Testing |
| 10,000     | Measured During Testing |
| 100,000    | Measured During Testing |

The results demonstrate that Merge Sort scales efficiently with larger datasets due to its O(n log n) complexity.

Similarly, Binary Search shows logarithmic growth and remains extremely efficient even for large sorted arrays.

The Dynamic Programming approach used in the Knapsack Problem successfully computes optimal solutions while maintaining acceptable performance for moderate input sizes.

---

## Learning Outcomes

Through this project, the following concepts were learned:

* Divide and Conquer Strategy
* Searching Algorithms
* Dynamic Programming
* Runtime Measurement
* Time Complexity Analysis
* Space Complexity Analysis
* Algorithm Optimization
* Practical C++ Programming

---

## Conclusion

This project successfully implemented and analyzed three important algorithms: Merge Sort, Binary Search, and the 0/1 Knapsack Problem. The implementation provided hands-on experience with different algorithmic paradigms and demonstrated how algorithm efficiency affects performance.

The project strengthened problem-solving abilities, improved understanding of computational complexity, and provided practical exposure to algorithm implementation using C++.
