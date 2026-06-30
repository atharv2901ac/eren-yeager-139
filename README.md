# C-Cpp-DSA

A structured collection of Data Structures & Algorithms implemented in C and C++, along with core language concepts and small projects — built while learning low-level programming and preparing for systems/AI-ML engineering work.

## About

This repository is my personal journey through C and C++, with a strong focus on Data Structures & Algorithms (DSA): from basic data structure implementations to algorithmic problem solving to small standalone projects. It doubles as a study log and a portfolio of working code.

## Repository Structure

```
C-Cpp-DSA/
├── dsa/                     # Data structures & algorithms (core focus)
│   ├── arrays/
│   ├── strings/
│   ├── linked-lists/
│   ├── stacks-queues/
│   ├── trees/
│   ├── graphs/
│   ├── hashing/
│   ├── sorting/
│   ├── searching/
│   ├── recursion-backtracking/
│   └── dynamic-programming/
├── learning-notes/          # Concept-wise notes and example snippets
│   ├── c-basics/            # Pointers, memory, structs, file I/O, etc.
│   └── cpp-basics/          # OOP, STL, templates, smart pointers, etc.
├── projects/                # Larger standalone projects
│   └── <project-name>/
├── mini-projects/           # Small self-contained programs
│   └── <mini-project-name>/
└── README.md
```

## DSA Coverage

| Category | Topics |
|---|---|
| Arrays & Strings | Two pointers, sliding window, prefix sums |
| Linked Lists | Singly, doubly, circular, reversal, cycle detection |
| Stacks & Queues | Implementation, monotonic stack, circular queue |
| Trees | BST, AVL, traversals, segment trees, tries |
| Graphs | BFS, DFS, shortest paths, MST, topological sort |
| Hashing | Hash maps/sets, collision handling |
| Sorting | Merge, quick, heap, counting sort |
| Searching | Binary search and variations |
| Recursion & Backtracking | N-Queens, subsets, permutations |
| Dynamic Programming | Knapsack, LCS, DP on trees/graphs |

Each topic folder contains C and/or C++ implementations with comments explaining the approach and time/space complexity.

## Topics Covered

- C fundamentals: pointers, memory management, structs, file handling
- C++ fundamentals: OOP, STL containers, templates, smart pointers
- Data structures: arrays, linked lists, stacks, queues, trees, graphs, hash tables
- Algorithms: sorting, searching, recursion, dynamic programming, graph traversal
- Small tools and mini-projects to apply concepts practically

## Building & Running

Most files can be compiled directly with `gcc` or `g++`:

```bash
# For C files
gcc filename.c -o output
./output

# For C++ files
g++ filename.cpp -o output -std=c++17
./output
```

Projects with multiple files include their own build instructions (and a `Makefile` or `CMakeLists.txt` where relevant) inside their respective folders.

## Goals

This repo is part of an ongoing effort to build a strong foundation in C/C++ and computer science fundamentals — skills that carry directly into systems-level thinking, performance-critical code, and eventually AI/ML engineering work.

## Status

🚧 Actively updated as new concepts are learned and new problems are solved.

## License

This project is licensed under the MIT License — feel free to use the code for learning purposes.