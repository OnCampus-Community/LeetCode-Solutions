<h2>Minimum Falling Path Sum</h2>
<br>
This repository contains Java Code where a falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right, in nxn array matrix return the minimum sum of any falling path through matrix.<br>

## Introduction

Minimum Falling Path Sum is a difficult problem but it was made as simple as possible with help of Dynamic Programming(DP). Without DP, this problem is difficult to solve. This operation used in a place where we need to find traverse with less cost from one end to another end.
<br>

## Algorithm
The algorithm used in this program is straightforward:<br>

1. We create an array of arrays (Matrix Array)
2. Since we use DP, we define the first row values as same
3. Check with  (row - 1, col), (row - 1, col + 1), or  (row - 1, col + 1), (row - 1, col - 1).
4. With Step 3, comparing which one has less cost since we need minimum path then summing up to know total cost/value.

## Contributing

If you'd like to contribute to this project, please follow these steps:<br>

1. Fork the repository.<br>
2. Create a new branch for your feature or bug fix.<br>
3. Make your changes and test them thoroughly.<br>
4. Create a pull request, describing your changes and why they are necessary.<br>
5. Your pull request will be reviewed, and once approved, it will be merged into the main branch.<br>

Feel free to use this code in your projects and adapt it as needed. If you encounter any issues or have suggestions for improvements, please don't hesitate to open an issue or contribute to the project. Your feedback and contributions are greatly appreciated!