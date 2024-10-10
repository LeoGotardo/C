#include <stdio.h>
#include <stdlib.h>

// Function to calculate the number of notes of a given denomination
void nota(int nota, int *valor, int *vez) {
    *vez = 0; // Initialize the count of notes

    while (*valor >= nota) {
        *valor -= nota;
        (*vez)++;
    }
}

int caixa() {
    int valor, nota100, nota50, nota20, nota10, nota5, nota1;

    // Prompt the user for the amount to withdraw
    printf("Qual o valor que deseja sacar?\n");
    scanf("%d", &valor);

    // Calculate the number of notes for each denomination
    nota(100, &valor, &nota100);
    nota(50, &valor, &nota50);
    nota(20, &valor, &nota20);
    nota(10, &valor, &nota10);
    nota(5, &valor, &nota5);
    nota(1, &valor, &nota1);

    // Display the results
    printf("Você receberá %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5 e %d notas de 1.\n",
           nota100, nota50, nota20, nota10, nota5, nota1);

    return 0;
}