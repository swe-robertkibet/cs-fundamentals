# Sorting Algorithms

Sorting algorithms are methods used to arrange data in a particular order, typically ascending or descending. They take a list of items and reorder them so that searching, analysis, and other operations become more efficient. Common sorting algorithms include selection sort, bubble sort, and merge sort, each with its own approach to comparing and reordering elements. Sorting is a fundamental concept in computer science used in many applications from databases to user interfaces.

## 1. Selection Sort

### Pseudocode:

```
Repeat for each index i from 0 to n - 1:
    Find the smallest element from index i to n - 1
    Swap it with the element at index i
```

### Explanation:

Selection sort goes through the array one element at a time, finds the smallest value in the unsorted portion, and swaps it with the current element. This continues until the array is sorted. It is simple but inefficient for large datasets.

---

## 2. Bubble Sort

### Pseudocode:

```
Repeat for each pass through the array:
    For each pair of adjacent elements:
        If the first is greater than the second:
            Swap them
    If no swaps happened during the pass:
        Quit early
```

### Explanation:

Bubble sort compares adjacent elements and swaps them if they are out of order. With each pass, the largest unsorted element "bubbles up" to its correct position. It keeps repeating this until the array is sorted or no swaps are needed in a pass.

---

## 3. Merge Sort

### Pseudocode:

```
If the array has only one element:
    Quit
Else:
    Sort the left half of the array
    Sort the right half of the array
    Merge the sorted halves into one sorted array
```

### Explanation:

Merge sort is a divide-and-conquer algorithm. It splits the array into halves until each piece has one element. Then it merges those pieces back together in order, forming a sorted array. It is more efficient than selection or bubble sort, especially for larger datasets.
