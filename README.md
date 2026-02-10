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
├── DIVIDE&CONQUER/        # Divide and Conquer paradigm
│   └── code.cpp           # Merge Sort implementation
├── RECURSION PART 1/      # Recursion fundamentals
│   └── code.cpp           # Basic recursive algorithms
├── RECURSION PART 2/      # Advanced recursion techniques
│   └── code.cpp           # Complex recursive problems
└── README.md
```

---

## 📖 Topics Covered

### 🔀 Divide & Conquer

- **Merge Sort** - Efficient O(n log n) sorting algorithm
  - Two-pointer merging technique
  - In-place merge operations
  - Optimal for large datasets

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
g++ -std=c++11 DIVIDE&CONQUER/code.cpp -o merge_sort
./merge_sort
```

### Example: Running Recursion Examples

```bash
g++ -std=c++11 "RECURSION PART 1/code.cpp" -o recursion1
./recursion1
```

---

## 💡 Key Concepts Demonstrated

| Algorithm    | Time Complexity | Space Complexity | Use Case              |
| ------------ | --------------- | ---------------- | --------------------- |
| Merge Sort   | O(n log n)      | O(n)             | Large dataset sorting |
| Factorial    | O(n)            | O(n)             | Recursive base cases  |
| Fibonacci    | O(2^n)          | O(n)             | DP problem foundation |
| String Dedup | O(n)            | O(26)            | Hash-based problems   |
| Tiling       | O(2^n)          | O(n)             | Combinatorial DP      |

---

## 🎓 Interview Preparation

This repository contains solutions to interview questions from:

- **Amazon** - Tiling Problem
- **Google** - Tiling Problem
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
