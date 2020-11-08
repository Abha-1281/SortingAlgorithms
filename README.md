# SortingAlgorithms
Sorting Algorithms using C++


# Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Worst and Average Case Time Complexity: O(n2)
Best Case Time Complexity: O(n)
Space Complexity: O(1)
In Place: Yes
Stable: Yes

# Heap Sort
Heap sort is a comparison based sorting technique based on Binary Heap data structure. It first find the maximum element and place the maximum element at the end. It repeat the same process for the remaining elements.

Time Complexity:
 Time complexity of heapify is O(Logn).
 Time complexity of BuildHeap() is O(n). 
 and overall time complexity of Heap Sort is O(nLogn).
Space Complexity: O(1)
In Place: Yes
Stable: not stable.


# Insertion Sort
Insertion sort is a simple sorting algorithm. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct
position in the sorted part.

Time Complexity: O(n2)
Space Complexity :O(1)
In Place: Yes
Stable: Yes


# Merge Sort
Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves.


Time complexity : θ(nLogn)
Space Complexity: O(n)
In Place: No
Stable: Yes


# Quick Sort
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. It then places the pivot element to its correct position and places all the smaller elements to the left and all the larger elements to the right of pivot element.


Best case and Average Case Time Complexity: θ(nLogn)
Worst Case: θ(n2)
Space Complexity: O(nLogn)
In Place: Yes
Stable: No


# Selection Sort
The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning.

Time Complexity: O(n2)
Space Complexity: O(1)
In Place: Yes
Stable: No
