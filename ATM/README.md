# ATM Withdrawal - C Code Documentation

## Introduction

This C code simulates an ATM withdrawal process. It calculates the number of banknotes of each denomination (100, 50, 20, 10, 5, and 1) required to fulfill the requested withdrawal amount.

## Function Description

### 1. `nota(nota, valor)`

- This function takes two integer arguments: `nota` (the denomination of the banknote) and `valor` (the remaining value to be withdrawn).
- It calculates how many banknotes of the given denomination (`nota`) can be used to cover the `valor`.
- The function uses a while loop to subtract the `nota` from `valor` while the remainder is zero.
- It counts how many banknotes were used and stores the result in the `vez` variable.
- The function returns the updated value of `valor` after subtracting all the possible banknotes of the given denomination.

### 2. `caixa()`

- This function represents the ATM withdrawal process.
- It declares variables `valor`, `nota100`, `nota50`, `nota20`, `nota10`, `nota5`, and `nota1` to hold the number of banknotes of each denomination required.
- The user is prompted to enter the withdrawal amount when the function is called.
- The function then calls the `nota()` function with different denominations to calculate the required number of banknotes for each denomination.
- Finally, it displays the result, showing the number of banknotes of each denomination to be dispensed.

## Example Usage

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function declarations
int nota(int nota, int valor);
int caixa();

int main()
{
    caixa(); // Call the ATM withdrawal function
    return 0;
}
```

## Note

- The code provided is intended to be part of a larger program. To use it as a stand-alone program, you should add the `main()` function, as shown in the example usage.
- Please ensure that you include the necessary header files and any other required functions to make the program functional.
- The provided code lacks proper input validation. In a complete application, you should add input validation to handle invalid user inputs. For example, check if the user enters a non-numeric value for the withdrawal amount or negative values.