# 📚 Data Structures & Algorithms Mastery

A comprehensive collection of **well-documented**, **production-quality** implementations of fundamental data structures and algorithms in C++. This repository demonstrates deep understanding of core CS concepts essential for technical interviews and software development.

---

## 🎯 Overview

This project serves as a learning resource and interview preparation guide, covering critical algorithmic paradigms with clear explanations, time/space complexity analysis, and real-world use cases.

**Key Features:**

- ✅ Clean, readable C++ code following best practices
- ✅ Comprehensive documentation with Doxygen-style comments
- ✅ Complexity analysis for every algorithm
- ✅ Real-world problem examples (Amazon, Google interview questions)
- ✅ Well-organized module structure

---

## 📂 Project Structure

```
DSA/
├── ARRAYS/                           # Array-based algorithms
├── DIVIDE&CONQUER/                   # Divide and Conquer paradigm
│   ├── mergeSort/                    # Merge Sort implementation
│   │   └── code.cpp
│   ├── quickSort/                    # Quick Sort implementation
│   │   └── code.cpp
│   └── SEARCH-IN-ROTATED-SORTED-ARRAY/  # Binary search variant
│       └── code.cpp
├── RECURSION PART 1/                 # Recursion fundamentals
│   └── code.cpp                      # Basic recursive algorithms
├── RECURSION PART 2/                 # Advanced recursion techniques
│   └── code.cpp                      # Complex recursive problems
└── README.md
```

---

## 📖 Topics Covered

### � Arrays

Coming soon - Array manipulation and searching algorithms

### 🔀 Divide & Conquer

- **Merge Sort** - Efficient O(n log n) sorting algorithm
  - Two-pointer merging technique
  - In-place merge operations
  - Optimal for large datasets

- **Quick Sort** - Fast in-place sorting algorithm
  - Partition-based approach
  - Average O(n log n), worst O(n²)
  - Industry-standard sorting method

- **Search in Rotated Sorted Array** - Binary search variant
  - O(log n) search complexity
  - Pivot detection technique
  - Common interview problem (Amazon, Microsoft)

### 🔁 Recursion - Part 1

Core recursive patterns and mathematical functions:

- **Factorial** - Base case and recursive step fundamentals
- **Number Printing** - Decreasing order traversal
- **Sum Calculation** - Accumulation through recursion
- **Fibonacci** - Exponential time complexity analysis
- **Array Validation** - Sorted array checking

### 🎨 Recursion - Part 2

Advanced problem-solving with recursion:

- **Tiling Problem** - Dynamic programming fundamentals (Amazon, Google)
- **String Deduplication** - Character mapping and backtracking
- **Friends Pairing Problem** - Combinatorial recursion (Goldman Sachs)

---

## 🚀 Quick Start

### Compilation

```bash
# Merge Sort
g++ -std=c++11 DIVIDE&CONQUER/mergeSort/code.cpp -o merge_sort
./merge_sort

# Quick Sort
g++ -std=c++11 DIVIDE&CONQUER/quickSort/code.cpp -o quick_sort
./quick_sort

# Search in Rotated Sorted Array
g++ -std=c++11 DIVIDE&CONQUER/SEARCH-IN-ROTATED-SORTED-ARRAY/code.cpp -o rotated_search
./rotated_search
```

### Example: Running Recursion Examples

```bash
g++ -std=c++11 "RECURSION PART 1/code.cpp" -o recursion1
./recursion1
```

---

## 💡 Key Concepts Demonstrated

| Algorithm            | Time Complexity | Space Complexity | Use Case               |
| -------------------- | --------------- | ---------------- | ---------------------- |
| Merge Sort           | O(n log n)      | O(n)             | Large dataset sorting  |
| Quick Sort           | O(n log n) avg  | O(log n)         | In-place fast sorting  |
| Rotated Array Search | O(log n)        | O(1)             | Modified binary search |
| Factorial            | O(n)            | O(n)             | Recursive base cases   |
| Fibonacci            | O(2^n)          | O(n)             | DP problem foundation  |
| String Dedup         | O(n)            | O(26)            | Hash-based problems    |
| Tiling               | O(2^n)          | O(n)             | Combinatorial DP       |

---

## 🎓 Interview Preparation

This repository contains solutions to interview questions from:

- **Amazon** - Tiling Problem, Search in Rotated Sorted Array
- **Google** - Tiling Problem
- **Microsoft** - Search in Rotated Sorted Array
- **Goldman Sachs** - Friends Pairing Problem

Each solution includes:

- ✓ Problem statement clarity
- ✓ Complexity walk-through
- ✓ Optimal implementation
- ✓ Edge case handling

---

## 📚 Learning Path

Recommended study order for interview preparation:

1. **Start Here** → Recursion Part 1 (Build fundamentals)
2. **Core Concepts** → Recursion Part 2 (Complex problem patterns)
3. **Optimization** → Divide & Conquer (Efficient algorithms)
   - Begin with Merge Sort (stable sorting)
   - Progress to Quick Sort (in-place sorting)
   - Master Search in Rotated Sorted Array (binary search variations)
4. **Data Structures** → Arrays (Coming soon)

---

## 🔧 Technical Stack

- **Language:** C++11
- **Compiler:** GCC/Clang
- **Standards:** ISO C++11 or later
- **Platform:** Cross-platform (Windows, Linux, macOS)

---

## 📝 Code Quality

- **Documentation:** Doxygen-style comments with parameter descriptions
- **Style:** Google C++ Style Guide compliant
- **Testing:** Input validation and edge case handling
- **Readability:** Clear variable names and logical structure

---

## 🤝 Contributing

Contributions are welcome! Please ensure:

- Code follows existing style conventions
- All functions include documentation
- Complexity analysis is provided
- Test cases are included

---

## 📄 License

This project is open source and available for educational purposes.

---

## ✨ Connect & Feedback

If you found this helpful, please ⭐ star this repository!

**Perfect for:**

- 📌 Technical interview preparation
- 🎓 CS course supplementary materials
- 💼 Portfolio demonstration
- 🧠 Algorithm mastery

---

_Last Updated: February 2026_
