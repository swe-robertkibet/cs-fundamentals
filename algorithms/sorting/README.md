# Sorting Algorithms

Sorting algorithms arrange data in a specific order (ascending/descending). They are core tools in computer science, enabling efficient searching, analysis, and organization. Common algorithms include selection sort, bubble sort, merge sort, insertion sort, and quick sort.

![Sorting Visualizer](images/image.png)

---

## 🎨 Interactive Visualizer

Explore sorting algorithms step by step with the interactive visualizer:

- **[Live Demo](https://swe-robertkibet.github.io/cs-fundamentals/)** (GitHub Pages)
- **[Source Code](docs/index.html)** (in this repository)

---

## ⏱️ Time Complexity Comparison

| Algorithm          | Best Case  | Average Case | Worst Case | Space Complexity | Stable | In-Place |
| ------------------ | ---------- | ------------ | ---------- | ---------------- | ------ | -------- |
| **Selection Sort** | O(n²)      | O(n²)        | O(n²)      | O(1)             | No     | Yes      |
| **Bubble Sort**    | O(n)       | O(n²)        | O(n²)      | O(1)             | Yes    | Yes      |
| **Merge Sort**     | O(n log n) | O(n log n)   | O(n log n) | O(n)             | Yes    | No       |
| **Insertion Sort** | O(n)       | O(n²)        | O(n²)      | O(1)             | Yes    | Yes      |
| **Quick Sort**     | O(n log n) | O(n log n)   | O(n²)      | O(log n)         | No     | Yes      |

---

## Algorithms

### 1. Selection Sort

**Pseudocode**

```

Repeat for each index i from 0 to n - 1:
Find the smallest element from index i to n - 1
Swap it with the element at index i

```

**Explanation**: Finds the smallest item in the unsorted part and swaps it into place. Simple but inefficient.

---

### 2. Bubble Sort

**Pseudocode**

```

Repeat for each pass through the array:
For each pair of adjacent elements:
If the first > second:
Swap
If no swaps happened:
Quit

```

**Explanation**: Swaps adjacent elements until sorted. Easy to implement, slow for large arrays.

---

### 3. Merge Sort

**Pseudocode**

```

If array has 1 element: Quit
Else:
Sort left half
Sort right half
Merge halves

```

**Explanation**: Divide-and-conquer, consistently O(n log n), requires extra memory.

---

### 4. Insertion Sort

**Pseudocode**

```

For i = 1 to n - 1:
Store current element
Shift larger elements forward
Insert at correct position

```

**Explanation**: Builds sorted list one item at a time. Fast for small or nearly sorted arrays.

---

### 5. Quick Sort

**Pseudocode**

```

If low < high:
Choose pivot
Partition array around pivot
Recursively sort partitions

```

**Explanation**: Divide-and-conquer with good average performance. Worst case O(n²) if pivots are poor.
