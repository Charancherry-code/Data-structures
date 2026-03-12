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

## Project Structure

```text
DSA/
|-- ARRAYS/
|-- BACK-TRACKING/
|   |-- findSubsets/
|   |   `-- code.cpp
|   |-- GridWays/
|   |   `-- code.cpp
|   |-- init/
|   |   `-- code.cpp
|   |-- N-queens/
|   |   `-- code.cpp
|   `-- permutations/
|       `-- code.cpp
|-- BITMANIPULATION/
|-- DIVIDE&CONQUER/
|   |-- mergeSort/
|   |   `-- code.cpp
|   |-- quickSort/
|   |   `-- code.cpp
|   `-- SEARCH-IN-ROTATED-SORTED-ARRAY/
|       `-- code.cpp
|-- POINTERS/
|-- RECURSION PART 1/
|   `-- code.cpp
|-- RECURSION PART 2/
|   `-- code.cpp
|-- SORTING/
|-- STRINGS/
|-- VECTORS/
|   `-- 2D-VECTORS/
|-- temp.cpp
`-- README.md
```

## Implemented Topics

### Divide and Conquer

- Merge Sort
- Quick Sort
- Search in Rotated Sorted Array

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
