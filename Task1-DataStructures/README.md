# Data Structures Implementation in C++

## Overview

This project is developed as part of the internship assignment to demonstrate the implementation of fundamental data structures in C++. The project includes custom implementations of Linked List, Stack, Queue, and Binary Search Tree without relying on STL containers.

## Objectives

* Understand the internal working of common data structures.
* Implement core operations such as insertion, deletion, searching, and traversal.
* Analyze time and space complexity of each operation.
* Demonstrate practical usage through executable programs.

## Implemented Data Structures

### 1. Linked List

Operations:

* Insert Node
* Delete Node
* Search Node
* Display List

Time Complexity:

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(n)       |
| Delete    | O(n)       |
| Search    | O(n)       |
| Display   | O(n)       |

---

### 2. Stack

Operations:

* Push
* Pop
* Peek (Top Element)
* Display Stack

Time Complexity:

| Operation | Complexity |
| --------- | ---------- |
| Push      | O(1)       |
| Pop       | O(1)       |
| Peek      | O(1)       |

---

### 3. Queue

Operations:

* Enqueue
* Dequeue
* Display Queue

Time Complexity:

| Operation | Complexity |
| --------- | ---------- |
| Enqueue   | O(1)       |
| Dequeue   | O(1)       |

---

### 4. Binary Search Tree (BST)

Operations:

* Insert Node
* Search Node
* Inorder Traversal

Time Complexity:

| Operation | Average Case | Worst Case |
| --------- | ------------ | ---------- |
| Insert    | O(log n)     | O(n)       |
| Search    | O(log n)     | O(n)       |
| Traversal | O(n)         | O(n)       |

## Project Structure

```text
DataStructures/
│
├── LinkedList/
│   ├── linkedlist.cpp
│
├── Stack/
│   ├── stack.cpp
│
├── Queue/
│   ├── queue.cpp
│
├── BST/
│   ├── bst.cpp
│
├── screenshots/
│
└── README.md
```

## Compilation

Compile each program using the GNU C++ compiler:

```bash
g++ LinkedList/linkedlist.cpp -o LinkedList/linkedlist.exe
g++ Stack/stack.cpp -o Stack/stack.exe
g++ Queue/queue.cpp -o Queue/queue.exe
g++ BST/bst.cpp -o BST/bst.exe
```

## Execution

Run the executables:

```bash
LinkedList/linkedlist.exe
Stack/stack.exe
Queue/queue.exe
BST/bst.exe
```

## Sample Output

### Linked List

```text
10 -> 20 -> 30 -> NULL
Search 20: Found
10 -> 30 -> NULL
```

### Stack

```text
30 20 10
Top Element: 30
Popped: 30
20 10
```

### Queue

```text
10 20 30
Removed: 10
20 30
```

### Binary Search Tree

```text
Inorder Traversal: 20 30 40 50 70
Search 40: Found
```

## Technologies Used

* C++
* GNU G++ Compiler
* Command Prompt / PowerShell
* Visual Studio Code

## Author

Sanjay Pushparaj

Bachelor of Technology (Artificial Intelligence & Machine Learning)

SNS College of Technology

Coimbatore, Tamil Nadu
