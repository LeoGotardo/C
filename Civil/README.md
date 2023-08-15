# Civil Status - C Code Documentation

## Introduction

This C code takes user input for their name and civil status and displays a corresponding message based on the provided civil status.

## Function Description

### 1. `estado_civil()`

- This function represents a civil status program.
- It declares character arrays `estado_civil` and `nome` to hold the user's civil status and name, respectively.
- The user is prompted to enter their name and civil status.
- The function then uses `strcmp()` to compare the entered civil status with predefined options for "Solteiro" (Single), "Casado" (Married), "Divorciado" (Divorced), and "Viuvo" (Widowed).
- Depending on the comparison, it prints a corresponding message about the user's civil status.
- If the entered civil status does not match any of the predefined options, it displays "Estado civil invalido" (Invalid civil status).

## Example Usage

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declaration
int estado_civil();

int main()
{
    estado_civil(); // Call the civil status program function
    return 0;
}
```

## Note

- The code provided is intended to be part of a larger program. To use it as a stand-alone program, you should add the `main()` function, as shown in the example usage.
- Please ensure that you include the necessary header files and any other required functions to make the program functional.
- The provided code has some issues that need to be fixed:
  1. Use `%s` format specifier in `scanf()` to read strings (character arrays).
  2. In the `strcmp()` comparisons, `'0'` should be changed to `0` (without quotes).
  3. There are redundant checks for "Casado" in both lowercase and uppercase forms. Remove one of them.
  4. The program could benefit from input validation to handle cases where the user enters invalid or unexpected input. For example, if the user enters an invalid character or an extremely long name, the program may behave unexpectedly. Input validation will help prevent such issues.