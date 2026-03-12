# 📚 Data Structures & Algorithms Mastery

A comprehensive collection of well-documented, production-quality implementations of fundamental data structures and algorithms in C++. This repository demonstrates deep understanding of core CS concepts essential for technical interviews and software development.

## 🎯 Overview

This project serves as a learning resource and interview preparation guide, covering critical algorithmic paradigms with clear explanations, time/space complexity analysis, and real-world use cases.

**Key Features:**
- ✅ Clean, readable C++11/C++14 code following best practices
- ✅ Comprehensive problem implementations from major tech companies
- ✅ Complexity analysis for every algorithm
- ✅ Real-world problem examples (Amazon, Google, Microsoft interview questions)
- ✅ Well-organized modular structure by algorithmic paradigm

## 📂 Project Structure

```
DSA/
├── DIVIDE&CONQUER/                   # Divide and Conquer algorithms
│   ├── mergeSort/                    # O(n log n) stable sorting
│   ├── quickSort/                    # O(n log n) avg in-place sorting
│   └── SEARCH-IN-ROTATED-SORTED-ARRAY/  # O(log n) binary search variant
├── RECURSION PART 1/                 # Recursion fundamentals
├── RECURSION PART 2/                 # Advanced recursion techniques
├── BACK-TRACKING/                    # Backtracking algorithms
│   ├── findSubsets/                  # Generate all subsets
│   ├── GridWays/                     # Count paths in grid
│   ├── N-queens/                     # N-Queens problem
│   ├── permutations/                 # Generate permutations
│   └── sudokoSolver/                 # Sudoku solver using backtracking
├── ARRAYS/                           # Array problems (in progress)
├── SORTING/                          # Sorting algorithms (in progress)
├── STRINGS/                          # String manipulation (in progress)
├── VECTORS/                          # Vector operations
│   └── 2D-VECTORS/                   # 2D vector implementations
├── POINTERS/                         # Pointer concepts (in progress)
├── BITMANIPULATION/                  # Bit manipulation (in progress)
└── README.md
```

## 📖 Topics Covered

### 🔀 Divide & Conquer

- **Merge Sort** - Efficient O(n log n) stable sorting
  - Time Complexity: O(n log n) in all cases
  - Space Complexity: O(n)
  - Two-pointer merging technique
  - Optimal for large datasets requiring stable sort

- **Quick Sort** - Fast in-place divide-and-conquer sorting
  - Time Complexity: O(n log n) average, O(n²) worst case
  - Space Complexity: O(log n) for recursion stack
  - Partition-based approach with pivot selection
  - Industry-standard sorting method

- **Search in Rotated Sorted Array** - Binary search variant
  - Time Complexity: O(log n)
  - Space Complexity: O(1)
  - Pivot detection and half-array elimination
  - Common Amazon & Microsoft interview question

### Recursion Part 1

- Basic recursion patterns
- Number and array recursion exercises

### Recursion Part 2

- Tiling Problem
- String deduplication using recursion
- Friends Pairing Problem

### Backtracking

- Subset generation
- Grid ways
- N-Queens
- Permutations

## Build and Run

Use g++ to compile any file.

Example commands:

```bash
g++ -std=c++11 "DIVIDE&CONQUER/mergeSort/code.cpp" -o merge_sort
./merge_sort

g++ -std=c++11 "DIVIDE&CONQUER/SEARCH-IN-ROTATED-SORTED-ARRAY/code.cpp" -o rotated_search
./rotated_search

g++ -std=c++11 "BACK-TRACKING/N-queens/code.cpp" -o nqueens
./nqueens
```

## Notes

- Some folders are placeholders and will be filled with implementations gradually.
- A few folders may contain compiled .exe files from local runs.

## License

This repository is intended for learning and interview preparation.

Last updated: 11 March 2026
