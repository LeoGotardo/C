# Salary Increase Function - C Code Documentation

## Introduction

This C code defines a function to calculate the salary increase for different job positions based on the given salary and apply the corresponding percentage increase. The user can select a job position (identified by an integer ID) and input the current salary to calculate the new salary after the increase.

## Function Description

### 1. `salario_aumento()`

- This function calculates the salary increase based on the selected job position (ID) and the current salary provided by the user.
- The user is prompted to enter the job position ID and the current salary using the `scanf` function.
- Based on the job position ID, the function applies the corresponding percentage increase to the salary to calculate the new salary.
- The function then prints the percentage increase and the new salary.

## Usage

1. Call the `salario_aumento()` function in your C program to calculate the salary increase for a given job position.
2. The user should enter the job position ID (an integer value) and the current salary (a floating-point value) when prompted by the function.
3. The function will calculate the salary increase based on the job position and display the percentage increase and the new salary.

## Note

- The code assumes that the user will input valid integer values for the job position ID and a valid floating-point value for the current salary.
- The code uses the `%d` format specifier for reading integers and the `%.12f` format specifier for reading floating-point values. Make sure to enter valid input; otherwise, unexpected behavior may occur.
- The percentage increase is hard-coded based on the provided job position IDs. If different percentages are required, you can modify the code accordingly.