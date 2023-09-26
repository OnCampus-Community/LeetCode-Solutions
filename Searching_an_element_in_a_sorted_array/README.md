<h2>Searching an element in a sorted array</h2>
<br>
This repository contains C++ and Java code that implements binary search to find a specific element in a sorted array efficiently. Binary search is a commonly used algorithm for searching in sorted data structures like arrays and lists. The code takes an input sorted array of integers and a target element, performs binary search, and returns the index of the target element if it exists in the array or a message indicating that the element was not found.<br>

## Introduction

Searching for an element in a sorted array is a fundamental problem in computer science and data analysis. Binary search is an efficient algorithm for solving this problem with a time complexity of O(log n), making it suitable for large datasets. This code provides a reliable and reusable implementation of binary search, making it easy to find elements in sorted arrays.<br>

## Binary Search

Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item.<br>

## Algorithm
The algorithm used in this program is straightforward:<br>

1. Set two pointers, low and high, to the beginning and end of the array, respectively.<br>
2. While low is less than or equal to high find the middle element of the array, mid.<br>
3. Compare the target element to the middle element:<br>
    * If the target element equals the middle element, return `mid`.<br>
    * If the target element is less than the middle element, set `high = mid - 1`.<br>
    * If the target element is greater than the middle element, set `low = mid + 1`.<br>
4. Return -1 if the target element is not found.<br>

## Contributing

If you'd like to contribute to this project, please follow these steps:<br>

1. Fork the repository.<br>
2. Create a new branch for your feature or bug fix.<br>
3. Make your changes and test them thoroughly.<br>
4. Create a pull request, describing your changes and why they are necessary.<br>
5. Your pull request will be reviewed, and once approved, it will be merged into the main branch.<br>

Feel free to use this code in your projects and adapt it as needed. If you encounter any issues or have suggestions for improvements, please don't hesitate to open an issue or contribute to the project. Your feedback and contributions are greatly appreciated!