# Sorting Algorithms

Sorting algorithms are methods used to arrange data in a particular order, typically ascending or descending. They take a list of items and reorder them so that searching, analysis, and other operations become more efficient. Common sorting algorithms include selection sort, bubble sort, merge sort, insertion sort, and quick sort, each with its own approach to comparing and reordering elements. Sorting is a fundamental concept in computer science used in many applications from databases to user interfaces.

---

## 1. Selection Sort

### Pseudocode

```
Repeat for each index i from 0 to n - 1:
    Find the smallest element from index i to n - 1
    Swap it with the element at index i
```

### Explanation

Selection sort goes through the array one element at a time, finds the smallest value in the unsorted portion, and swaps it with the current element. This continues until the array is sorted. It is simple and easy to implement, but it is inefficient for large datasets because it always makes the same number of comparisons, regardless of the input order.

---

## 2. Bubble Sort

### Pseudocode

```
Repeat for each pass through the array:
    For each pair of adjacent elements:
        If the first is greater than the second:
            Swap them
    If no swaps happened during the pass:
        Quit early
```

### Explanation

Bubble sort compares adjacent elements and swaps them if they are out of order. With each pass, the largest unsorted element moves to its correct position at the end of the array. The process repeats until no more swaps are needed. Although inefficient for large arrays, bubble sort is simple and helps illustrate basic sorting logic.

---

## 3. Merge Sort

### Pseudocode

```
If the array has only one element:
    Quit
Else:
    Sort the left half of the array
    Sort the right half of the array
    Merge the sorted halves into one sorted array
```

### Explanation

Merge sort is a divide-and-conquer algorithm. It splits the array into halves until each part has only one element. Then it merges those parts back together in sorted order. It is more efficient than selection or bubble sort for large datasets, and it performs consistently regardless of the initial order of elements. However, it requires additional memory for the merging process.

---

## 4. Insertion Sort

### Pseudocode

```
Start from index 1 to n - 1:
    Store the current element
    Compare it to elements before it
    Shift larger elements one position forward
    Insert the stored element at the correct position
```

### Explanation

Insertion sort builds the sorted part of the array one item at a time. For each new element, it looks to the left and shifts any larger elements forward to make space, then inserts the element in its proper place. It is fast for small or nearly sorted arrays but performs poorly on large, unsorted inputs. It avoids unnecessary comparisons when the data is nearly in order.

---

## 5. Quick Sort

### Pseudocode

```
If low < high:
    Choose a pivot element
    Partition the array around the pivot
    Recursively sort the left and right partitions
```

### Explanation

Quick sort is another divide-and-conquer algorithm. It chooses a pivot and partitions the array so that all elements less than the pivot go to one side and all greater ones to the other. It then recursively sorts each partition. It generally performs very well, even on large datasets, and does not require extra memory like merge sort. However, its performance can suffer if poor pivot choices are made, especially in already sorted or reversed arrays.
