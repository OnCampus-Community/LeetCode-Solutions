<h2>Parenthesis Checker</h2>
<br>
This repository contains C++ and Java code for a simple program that checks the validity of a string containing various types of parentheses, brackets, and curly braces. It determines whether the arrangement of these symbols is balanced or not.
<br>

## Introduction

The "Parenthesis Checker" code is a fundamental utility that helps you determine whether a given string of parentheses, brackets, and curly braces is properly balanced. In many programming and text-processing tasks, it's essential to ensure that the opening and closing symbols match correctly.

## Algorithm

The algorithm used in this program is straightforward:<br>

1. Initialize an empty stack.<br>
2. Iterate through each character in the input string.<br>
3. If the character is an opening parenthesis ('(', '[', or '{'), push it onto the stack.<br>
4. If the character is a closing parenthesis (')', ']', or '}'):<br>
* Pop the top element from the stack.<br>
* Check if the popped element matches the current closing parenthesis. If they don't match, the string is not balanced, and the function returns False.<br>
5. After processing all characters, if the stack is empty, the string is balanced; otherwise, it's not.<br>

## Contributing

If you'd like to contribute to this project, please follow these steps:<br>

1. Fork the repository.<br>
2. Create a new branch for your feature or bug fix.<br>
3. Make your changes and test them thoroughly.<br>
4. Create a pull request, describing your changes and why they are necessary.<br>
5. Your pull request will be reviewed, and once approved, it will be merged into the main branch.<br>

Feel free to use this code in your projects and adapt it as needed. If you encounter any issues or have suggestions for improvements, please don't hesitate to open an issue or contribute to the project. Your feedback and contributions are greatly appreciated!