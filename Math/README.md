# Mathematical Operations Program - C Code Documentation

## Introduction

This C code represents a mathematical operations program that performs various arithmetic calculations based on the user's choice. The program prompts the user to enter two integers and select an operation from a menu, including addition, finding the average, finding the smaller number, and finding the larger number.

## Function Description

### 1. `math()`

- This function represents the mathematical operations program.
- It prompts the user to enter two integer numbers `num1` and `num2`.
- The user is then presented with a menu of operations to choose from: 
  - 1: Perform addition of `num1` and `num2`.
  - 2: Find the average of `num1` and `num2`.
  - 3: Find the smaller of the two numbers.
  - 4: Find the larger of the two numbers.
- Based on the user's choice, the corresponding operation is performed, and the result is displayed.

## Usage

1. Call the `math()` function in your C program to use the mathematical operations functionality.
2. Follow the on-screen instructions to input two integer numbers and select an operation from the menu.
3. The program will display the result of the selected operation.

## Note

- The code assumes that the user will input valid integer values for `num1` and `num2`.
- The code uses the `%d` format specifier to read integers from user input. Make sure to enter valid integer values; otherwise, unexpected behavior may occur.
- The code does not include any error handling for invalid inputs or non-integer values. It is advisable to add proper error handling to enhance the program's robustness.