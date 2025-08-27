# Data Structures

This week introduced advanced data structures and dynamic memory allocation. I learned to build complex data structures from scratch using pointers and manual memory management, moving beyond simple arrays to more sophisticated ways of organizing data.

## Skills Learned

- **Dynamic Memory Allocation**: Using `malloc()` and `free()` for runtime memory management
- **Pointers and Structures**: Creating and manipulating custom data types with pointers
- **Linked Lists**: Building linked data structures with node-based storage
- **Binary Search Trees**: Implementing tree structures with recursive operations
- **Hash Tables**: Creating hash functions and handling collisions
- **Tries**: Building prefix trees for efficient string storage and search
- **Memory Debugging**: Using Valgrind to detect memory leaks and errors

## Key Projects

### Linked Lists
- `list.c` - Manual linked list implementation with dynamic node creation
  - Demonstrates adding nodes to the front of the list
  - Shows proper memory allocation and deallocation
  - Practices pointer manipulation and traversal

### Binary Search Trees
- `tree.c` - Recursive binary search tree operations
  - Implements tree insertion with proper ordering
  - Demonstrates recursive tree traversal
  - Shows memory management for tree nodes

### Hash Tables
- `hash.c` - Hash table implementation with collision handling
  - Creates hash function for string-to-index mapping
  - Demonstrates chaining for collision resolution
  - Practices array-of-pointers data structure

### Tries (Prefix Trees)
- `trie.c` - Prefix tree for efficient string operations
  - Builds tree structure for word storage and lookup
  - Demonstrates character-by-character navigation
  - Shows memory-efficient string processing

## How to Run

Compile and test data structures:
```bash
make list
./list

make tree
./tree

make hash
./hash
```

For memory debugging:
```bash
valgrind ./program_name
```

## Reflections

This week was the most challenging so far. Managing memory manually was intimidating after taking automatic memory management for granted. I struggled with segmentation faults and spent significant time debugging pointer issues with Valgrind.

The concept of recursive data structures (like trees) was difficult to visualize initially. Drawing diagrams on paper helped me understand how nodes connect and how recursive functions traverse these structures.

Hash tables taught me about trade-offs between time and space complexity, and I appreciated how they balance fast lookups with memory efficiency.

## Future Work

I plan to implement additional tree operations (deletion, balancing) and explore more sophisticated hash functions. Understanding these data structures deeply will be crucial for interview preparation and efficient algorithm design.