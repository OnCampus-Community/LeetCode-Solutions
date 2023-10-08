<h2>Minimum Processing Time</h2>
<br>
This repository contains C++ and Java code that calculates the minimum processing time among a set of tasks with varying completion times. The code takes an input list of tasks and their corresponding completion times and determines the task that requires the minimum processing time. This operation can be useful in task scheduling, job prioritization, and optimization problems where you need to identify the task that can be completed most quickly.<br>

## Introduction

Identifying the task with the minimum processing time is a common problem in various scheduling and optimization scenarios. This code provides an efficient solution to this problem. Whether you are managing tasks in a project, scheduling jobs, or optimizing processes, this code can help you quickly determine the task with the shortest completion time.

## Algorithm
The algorithm used in this program is straightforward:<br>

1. Take a time count variable and initialize it with zero.<br>
2. Sort the given processor time and tasks, processor time from highest to lowest and tasks from lowest to highest.<br>
3. Since the number of tasks are 4 times the number of processor time. Traverse the task along with processor time and only after traversing 4 times in task traverse further porcessor time.<br>
4. Check if the processor time and task sum is greater then previous all, then update it as the max.<br>
5. After traversing the whole data return the maximum sum of processor time and task.<br>

## Contributing

If you'd like to contribute to this project, please follow these steps:<br>

1. Fork the repository.<br>
2. Create a new branch for your feature or bug fix.<br>
3. Make your changes and test them thoroughly.<br>
4. Create a pull request, describing your changes and why they are necessary.<br>
5. Your pull request will be reviewed, and once approved, it will be merged into the main branch.<br>

Feel free to use this code in your projects and adapt it as needed. If you encounter any issues or have suggestions for improvements, please don't hesitate to open an issue or contribute to the project. Your feedback and contributions are greatly appreciated!