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

## 📑 Table of Contents

- [Project Structure](#-project-structure)
- [Topics Covered](#-topics-covered)
- [Build and Run](#-build-and-run)
- [Complexity Analysis](#-complexity-analysis-reference)
- [Interview Preparation](#-interview-preparation)
- [Learning Path](#-recommended-learning-path)
- [Contributing](#-contributing--extending)
- [Technical Stack](#-technical-stack)
- [License](#-license)

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
│   ├── init/                         # Backtracking fundamentals
│   ├── findSubsets/                  # Generate all subsets
│   ├── GridWays/                     # Count paths in grid
│   ├── N-queens/                     # N-Queens problem
│   ├── permutations/                 # Generate permutations
│   └── sudokoSolver/                 # Sudoku solver using backtracking
├── LINKED-LIST/                      # Linked list implementations
│   └── init.cpp                      # Singly linked list fundamentals
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

### 🔁 Recursion - Part 1

Fundamentals of recursive problem solving:

- **Factorial** - Base case and recursive step patterns
  - Time: O(n), Space: O(n) call stack
- **Number & Array Recursion** - Traversal patterns
  - Forward and backward iteration using recursion
  - Array element processing and validation

### 🎯 Recursion - Part 2

Advanced recursive problem solving patterns:

- **Tiling Problem** - Dynamic programming + recursion
  - Time: O(2^n), Space: O(n)
  - Amazon & Google interview question
- **String Deduplication** - Character removal via recursion
  - Time: O(n), Space: O(26) character set
  - Backtracking with character masking
- **Friends Pairing Problem** - Combinatorial recursion
  - Time: O(2^n), Space: O(n)
  - Goldman Sachs interview problem

### 🔙 Backtracking

Exhaustive search with pruning strategies:

- **Backtracking Init** - Core backtracking concepts and template
  - Understanding the explore/choose/unchoose pattern
- **Subset Generation** - Generate all 2^n subsets
  - Time: O(2^n), Space: O(n) recursion depth
- **Grid Ways** - Count paths in a matrix
  - Time: O(2^(m+n)), Space: O(m+n)
- **N-Queens** - Place N queens on NxN board
  - Time: O(N!), Space: O(N)
  - Classic backtracking problem with constraint satisfaction
- **Permutations** - Generate all n! permutations
  - Time: O(n \* n!), Space: O(n)
- **Sudoku Solver** - Constraint satisfaction via backtracking
  - Time: O(9^(n²)), Space: O(n²)
  - NP-complete problem with optimization through pruning

### 🔗 Linked List

Fundamental linked data structure operations:

- **Singly Linked List** - Core node-based structure
  - Insertion at head and tail
  - Traversal and display
  - Memory management with pointers
  - Foundation for stacks, queues, and advanced structures

## 🚀 Build and Run

### Compilation

Use g++ with C++11 standard to compile any file.

**Divide & Conquer Examples:**

```bash
# Merge Sort
g++ -std=c++11 "DIVIDE&CONQUER/mergeSort/code.cpp" -o merge_sort
./merge_sort

# Quick Sort
g++ -std=c++11 "DIVIDE&CONQUER/quickSort/code.cpp" -o quick_sort
./quick_sort

# Search in Rotated Sorted Array
g++ -std=c++11 "DIVIDE&CONQUER/SEARCH-IN-ROTATED-SORTED-ARRAY/code.cpp" -o rotated_search
./rotated_search
```

**Backtracking Examples:**

```bash
# Backtracking Init
g++ -std=c++11 "BACK-TRACKING/init/code.cpp" -o bt_init
./bt_init

# N-Queens
g++ -std=c++11 "BACK-TRACKING/N-queens/code.cpp" -o nqueens
./nqueens

# Permutations
g++ -std=c++11 "BACK-TRACKING/permutations/code.cpp" -o permutations
./permutations

# Sudoku Solver
g++ -std=c++11 "BACK-TRACKING/sudokoSolver/code.cpp" -o sudoku
./sudoku
```

**Linked List Examples:**

```bash
# Linked List Init
g++ -std=c++11 "LINKED-LIST/init.cpp" -o linked_list
./linked_list
```

**Recursion Examples:**

```bash
# Recursion Part 1
g++ -std=c++11 "RECURSION PART 1/code.cpp" -o recursion1
./recursion1

# Recursion Part 2
g++ -std=c++11 "RECURSION PART 2/code.cpp" -o recursion2
./recursion2
```

## 💡 Complexity Analysis Reference

| Algorithm            | Time Complexity   | Space Complexity | Category     | Notes                           |
| -------------------- | ----------------- | ---------------- | ------------ | ------------------------------- |
| Merge Sort           | O(n log n) stable | O(n)             | D&C          | Always O(n log n)               |
| Quick Sort           | O(n log n) avg    | O(log n)         | D&C          | O(n²) worst, in-place           |
| Search Rotated Array | O(log n)          | O(1)             | D&C          | Binary search variant           |
| Subset Generation    | O(2^n)            | O(n)             | Backtracking | Exponential subsets             |
| N-Queens             | O(N!)             | O(N)             | Backtracking | Constraint satisfaction         |
| Permutations         | O(n \* n!)        | O(n)             | Backtracking | All permutations                |
| Sudoku Solver        | O(9^(n²))         | O(n²)            | Backtracking | NP-complete, pruning enables    |
| Grid Ways            | O(2^(m+n))        | O(m+n)           | Backtracking | Path counting problems          |
| Factorial            | O(n)              | O(n)             | Recursion    | Linear recursion                |
| Fibonacci            | O(2^n) naive      | O(n)             | Recursion    | Exponential without memoization |
| Tiling Problem       | O(2^n)            | O(n)             | Recursion    | DP with recursion               |
| Linked List Insert   | O(1) head / O(n)  | O(1)             | Linked List  | Pointer manipulation            |
| Linked List Traverse | O(n)              | O(1)             | Linked List  | Sequential access               |

## 🎓 Interview Preparation

This repository contains solutions to interview questions from top tech companies:

### Amazon

- Tiling Problem (Recursion Part 2)
- Search in Rotated Sorted Array (Divide & Conquer)

### Google

- Tiling Problem (Recursion Part 2)
- N-Queens problem (Backtracking)

### Microsoft

- Search in Rotated Sorted Array (Divide & Conquer)
- Sudoku Solver (Backtracking)

### Goldman Sachs

- Friends Pairing Problem (Recursion Part 2)

### Facebook / Meta

- Linked List operations (Linked List)
- Permutations (Backtracking)

Each solution includes:

- ✓ Problem statement clarity
- ✓ Complexity walk-through
- ✓ Optimal implementation
- ✓ Edge case handling
- ✓ Time/Space trade-offs

## 📚 Recommended Learning Path

For optimal skill development and interview preparation:

### Phase 1: Foundation (Week 1-2)

1. **Recursion Part 1** - Master fundamental recursion patterns
   - Understand base cases and recursive steps
   - Practice with simple mathematical functions

### Phase 2: Intermediate (Week 3-4)

2. **Recursion Part 2** - Advanced recursive problem solving
   - Learn dynamic programming intuition
   - Practice with complex recursive patterns

### Phase 3: Algorithms (Week 5-6)

3. **Divide & Conquer** - Efficient algorithmic paradigms
   - Study Merge Sort and Quick Sort
   - Master binary search variants

### Phase 4: Search & Exhaustion (Week 7-8)

4. **Backtracking** - Exhaustive search with pruning
   - Start with init patterns
   - N-Queens constraint satisfaction
   - Subset generation and permutations
   - Advanced: Sudoku solver

### Phase 5: Data Structures (Week 9-10)

5. **Linked List** - Pointer-based data structures
   - Node creation and pointer manipulation
   - Insertion, deletion, traversal
   - Foundation for stacks and queues

### Phase 6: Core DSA (Ongoing)

6. **Arrays, Strings, Sorting, Vectors** - Fill in remaining implementations

## 🔧 Code Quality & Best Practices

All implementations follow these principles:

- **Clean Code** - Clear variable names, logical structure, and readable formatting
- **Documentation** - Doxygen-style comments with parameter and return descriptions
- **Modularity** - Each algorithm is self-contained and independently compilable
- **Efficiency** - Optimal or near-optimal time and space complexity
- **Edge Cases** - Input validation and boundary condition handling
- **Standards** - ISO C++11 compliant, compiler-agnostic code
- **Testing** - Example inputs and expected outputs documented in code

## 📊 Algorithm Classifications

### By Paradigm

**Divide & Conquer** (3 algorithms)

- Problem decomposition into independent subproblems
- Merge solutions for optimal results
- Examples: Merge Sort, Quick Sort, Binary Search variants

**Recursion** (6+ problems)

- Direct recursive problem solving
- Mathematical function evaluation
- Deep recursion analysis
- Examples: Factorial, Fibonacci, Tiling, Pairing

**Backtracking** (5+ algorithms)

- Exhaustive search with intelligent pruning
- Constraint satisfaction problems
- State space exploration
- Examples: N-Queens, Permutations, Sudoku

**Linked List** (1+ implementations)

- Pointer-based dynamic data structure
- Node chain manipulation
- Foundation for advanced data structures
- Examples: Singly Linked List

### By Difficulty

**Beginner** - Foundation patterns

- Factorial, Number Recursion, Merge Sort

**Intermediate** - Problem-solving patterns

- Quick Sort, Permutations, Grid Ways

**Advanced** - Complex optimization

- Sudoku Solver, Tiling with DP, Search Rotated Array

## ⚡ Key Optimization Techniques

### Sorting

- **Comparison-based:** Merge Sort, Quick Sort
- **Optimization:** Pivot selection strategies for Quick Sort
- **Trade-offs:** Stable sorting vs in-place vs cache efficiency

### Searching

- **Binary Search:** Applicable to rotated sorted arrays
- **Pruning:** Early termination in search space
- **Optimization:** Logarithmic time complexity

### Recursion Optimization

- **Memoization:** Cache recursive results (DP foundation)
- **Tail Recursion:** Compiler optimization potential
- **Base Cases:** Minimize recursive depth

### Backtracking Optimization

- **Constraint Pruning:** Early detection of invalid states
- **Board Representation:** Efficient state encoding
- **Heuristics:** Intelligent search ordering
- **Example:** Sudoku uses bitmask for cell possibilities

## 🤝 Contributing & Extending

To add new algorithms or improve existing ones:

1. **Create a new subfolder** in appropriate category folder
2. **Write clean code** following existing conventions
3. **Include documentation**:
   - Function purpose and parameters
   - Time and space complexity analysis
   - Example inputs/outputs
   - Interview company (if applicable)
4. **Add compilation command** to README
5. **Test thoroughly** with edge cases
6. **Update relevant tables** in README
7. **Commit with descriptive message** referencing the algorithm

**Example folder structure for new algorithm:**

```
CATEGORY/
└── algorithmName/
    ├── code.cpp
    └── README.md (optional - detailed explanation)
```

## 🔧 Technical Stack

- **Language:** C++11 / C++14
- **Compiler:** GCC, Clang, MSVC (any ISO C++11+ compliant compiler)
- **Build:** No external dependencies - standard library only
- **Platform:** Cross-platform (Windows, Linux, macOS)
- **Compilation:** Simple g++ command line

## Notes

- LINKED-LIST: singly linked list with insertion and traversal implemented
- BACK-TRACKING/init: foundational backtracking template added
- Some folders are placeholders for upcoming implementations
- Compiled `.exe` files are artifacts from local testing and can be safely ignored
- All code is intentionally compiled from scratch each time for educational purposes
- Repository structure prioritizes clarity and learning over production deployment

## 📝 Repository Statistics

- **Total Algorithms:** 18+
- **Lines of Code:** 1200+
- **Topics Covered:** 7 (Recursion, Divide & Conquer, Backtracking, Linked List, Arrays, Strings, Data Structures)
- **Interview Companies:** Amazon, Google, Microsoft, Goldman Sachs, Facebook/Meta
- **Difficulty Levels:** Beginner to Advanced

## ✨ Perfect For

- 📌 Technical interview preparation
- 🎓 CS course supplementary materials
- 💼 Portfolio demonstration
- 🧠 Algorithm mastery and competitive programming
- 📚 Understanding fundamental CS paradigms

---

## 📄 License

This project is open source and available for educational purposes.

---

_Last Updated: March 17, 2026_
_Total Commits: 15_
