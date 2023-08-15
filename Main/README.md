# Main Program - C Code Documentation

## Introduction

This C code represents the main program that provides a menu to execute various subprograms related to different functionalities, such as an ATM simulator, civil status verification, finding numbers divisible by 11, mathematical operations, and salary calculations.

## Function Description

### 1. `main()`

- This function is the entry point of the program.
- It sets the locale to "Portuguese" to support the display of messages in the Portuguese language.
- The user is presented with a menu using the `menu()` function.
- Based on the user's choice, the corresponding subprogram is executed by calling the respective functions.

### 2. Subprograms

The main program calls the following subprograms based on the user's choice:

#### a. `caixa()`

- Represents an ATM (Caixa Eletrônico) simulation program that interacts with the user to perform transactions like withdrawals, deposits, etc.

#### b. `estado_civil()`

- Represents a program to verify the user's civil status. It prompts the user to enter their name and civil status, and then displays the appropriate message based on the input.

#### c. `div_11()`

- Represents a program to find and print numbers divisible by 11 within a given range. It prompts the user to enter the starting and ending numbers of the range, and then prints the numbers that are divisible by 11.

#### d. `math()`

- Represents a mathematical operations program that performs various arithmetic calculations based on the user's choice. It provides options to perform addition, subtraction, multiplication, and division on two numbers entered by the user.

#### e. `salario_aumento()`

- Represents a salary calculation program that calculates the new salary after applying a specified percentage increase. It prompts the user to enter the current salary and the percentage increase, and then displays the new salary.

## Usage

- Ensure that all the required subprograms (`caixa_eletronico.c`, `civil.c`, `divisor_11.c`, `math_program.c`, `salario.c`, and `menu.c`) are correctly implemented and included in the main program.
- The `setlocale` function may not be available on all platforms. If it is not supported on your system, you may omit it.

## Note

- The provided code assumes that the subprograms are implemented and functional as required. Make sure all the subprograms are tested and working correctly before integrating them into the main program.
- If you encounter any compilation errors or issues related to missing files or functions, please ensure that all the required files are present and correctly included in the project.