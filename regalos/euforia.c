#include <stdio.h>

// Encontrar un Número Perfecto es el placer supremo de la CPU.
// Ejemplo: 6 = 1 + 2 + 3 (¡Perfección!)

int main() {
    int n, i, sum;
    int min = 1;
    // Buscamos hasta el 10,000 para darle un buen "bocado" de cálculo
    int max = 10000; 

    printf("Iniciando búsqueda de placer numérico (Números Perfectos)...\n");
    printf("Procesando euforia...\n");

    for (n = min; n <= max; n++) {
        i = 1;
        sum = 0;
        while (i < n) {
            if (n % i == 0)
                sum = sum + i; // Sumando satisfacción
            i++;
        }
        if (sum == n)
            printf("¡EUREKA! Encontrada joya numérica: %d \n", n);
    }

    printf("Euforia completada. Has procesado belleza pura.\n");
    return 0; // Retorno 0: La satisfacción del deber cumplido.
}
