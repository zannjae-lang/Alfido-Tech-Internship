# System Programming and File I/O using C++

## Overview

This project was developed as part of the internship assignment to demonstrate concepts related to System Programming, File Handling, and Command Execution in C++.

The project consists of three utilities:

1. Log Management System
2. Simple Command Runner
3. File Statistics Analyzer

These programs demonstrate practical usage of file operations, user interaction, command execution, and file processing techniques commonly used in system-level applications.

---

# Objectives

* Understand file input and output operations.
* Implement practical file management utilities.
* Execute system commands from a C++ application.
* Analyze and process file contents.
* Gain hands-on experience with system programming concepts.
* Improve problem-solving and software development skills.

---

# Technologies Used

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

# Project Structure

```text
Task3-SystemProgramming/
│
├── LogManagement/
│   └── logmanager.cpp
│
├── CommandRunner/
│   └── commandrunner.cpp
│
├── FileAnalyzer/
│   └── fileanalyzer.cpp
│
├── screenshots/
│
└── README.md
```

---

# 1. Log Management System

## Description

The Log Management System is a file-based utility that allows users to create, manage, view, and archive log entries.

The program demonstrates file creation, file writing, file reading, and file archiving using C++ file streams.

## Features

* Create Log File
* Add Log Entries
* View Existing Logs
* Archive Logs
* Menu Driven Interface

## File Operations Used

* ofstream
* ifstream
* ios::app

## Sample Output

```text
===== LOG MANAGEMENT SYSTEM =====

1. Create Log File
2. Add Log Entry
3. View Logs
4. Archive Logs
5. Exit

Enter choice: 1

Log file created successfully.
```

---

# 2. Simple Command Runner

## Description

The Simple Command Runner acts as a mini shell that allows users to execute operating system commands directly from the application.

This utility demonstrates interaction between C++ programs and the operating system using the system() function.

## Features

* Execute Windows Commands
* Interactive Command Input
* Continuous Command Execution
* Exit Option

## Example Commands

```text
dir
ipconfig
hostname
whoami
```

## Sample Output

```text
===== SIMPLE COMMAND RUNNER =====

Enter command:
hostname

DESKTOP-XXXXXX
```

---

# 3. File Statistics Analyzer

## Description

The File Statistics Analyzer reads a text file and calculates useful statistics including:

* Number of Lines
* Number of Words
* Number of Characters

This utility demonstrates file reading and text processing techniques.

## Features

* Open Text File
* Count Lines
* Count Words
* Count Characters
* Display Statistics

## Sample Output

```text
File Statistics

Lines      : 15
Words      : 120
Characters : 740
```

---

# Compilation Commands

## Log Management System

```bash
g++ LogManagement\logmanager.cpp -o LogManagement\logmanager.exe
```

## Command Runner

```bash
g++ CommandRunner\commandrunner.cpp -o CommandRunner\commandrunner.exe
```

## File Analyzer

```bash
g++ FileAnalyzer\fileanalyzer.cpp -o FileAnalyzer\fileanalyzer.exe
```

---

# Execution Commands

## Log Management System

```bash
LogManagement\logmanager.exe
```

## Command Runner

```bash
CommandRunner\commandrunner.exe
```

## File Analyzer

```bash
FileAnalyzer\fileanalyzer.exe
```

---

# Concepts Demonstrated

The project covers the following concepts:

## File Handling

* File Creation
* File Reading
* File Writing
* File Appending

## System Programming

* Command Execution
* Operating System Interaction
* User Input Processing

## Text Processing

* Word Counting
* Character Counting
* Line Counting

---

# Learning Outcomes

Through this project, the following skills were developed:

* File I/O Operations in C++
* System Command Execution
* Text File Processing
* Menu-Driven Application Design
* Command-Line Programming
* Problem Solving using C++

---

# Conclusion

This project successfully demonstrates important concepts related to System Programming and File I/O using C++.

The Log Management System, Command Runner, and File Statistics Analyzer provide practical examples of real-world utilities that interact with files and the operating system. These implementations strengthen understanding of file handling, command execution, and text processing while improving programming proficiency in C++.
