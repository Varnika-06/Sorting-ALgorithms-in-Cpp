# Experiment 20 – Sorting Algorithms

**Name:** Varnika Maurya  
**PRN:** 24070123160  

---

##  Aim
To implement and understand different sorting algorithms (Selection Sort, Insertion Sort, and Bubble Sort) in C++.

##  Outcome
By the end of this experiment, the student will be able to:
- Understand the working principles of basic sorting algorithms.
- Implement sorting techniques using C++.
- Compare the time complexity of the algorithms.

---

##  Program No. 1 – Selection Sort (Pointer Implementation)

### Objective
To implement **Selection Sort** using pointers in C++.

### Theory
Selection Sort is a simple comparison-based sorting technique.
- It works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the array and placing it at the beginning.  
- Process repeats until the entire array is sorted.  
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(1)  

### Algorithm
1. Start with the first element as the current minimum.  
2. Compare it with the remaining elements to find the smallest element.  
3. Swap the smallest element with the current element.  
4. Move to the next element and repeat until the array is sorted.  
5. Stop when all elements are in order.

### Conclusion
Selection Sort successfully arranges the elements of an array in ascending order using repeated comparisons and swaps.

---

##  Program No. 2 – Insertion Sort

### Objective
To implement **Insertion Sort** in C++.

### Theory
Insertion Sort is a simple and efficient sorting technique for small datasets.  
- Builds the final sorted array one item at a time.  
- Each element is compared with the elements on its left and inserted into its correct position.  
- **Time Complexity:** O(n²) (worst case), O(n) (best case when nearly sorted).  
- **Space Complexity:** O(1)  

### Algorithm
1. Assume the first element is sorted.  
2. Pick the next element (key) and compare it with the elements to its left.  
3. Shift all elements greater than the key one position to the right.  
4. Insert the key at its correct position.  
5. Repeat until the entire array is sorted.

### Conclusion
Insertion Sort is efficient for small datasets and nearly sorted arrays. It places each element at its correct position in every iteration.

---

##  Program No. 3 – Bubble Sort

### Objective
To implement **Bubble Sort** in C++.

### Theory
Bubble Sort is one of the simplest sorting techniques.  
- Repeatedly compares adjacent elements and swaps them if they are in the wrong order.  
- With each pass, the largest element "bubbles up" to its correct position.  
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(1)  

### Algorithm
1. Start from the first element and compare it with the next.  
2. If the current element is greater, swap them.  
3. Continue this process for the entire array.  
4. After each pass, the largest element reaches its correct position.  
5. Repeat until no swaps are required.

### Conclusion
Bubble Sort arranges elements by repeatedly swapping adjacent elements. Though simple, it is inefficient for large datasets compared to other sorting algorithms.

---
