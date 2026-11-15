#include <stdio.h>

int main() {
    int num1, num2;

    printf("=== CALCULADORA BASICA ===\n");

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);

    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    printf("\n--- RESULTADOS ---\n");
    printf("Suma: %d\n", num1 + num2);
    printf("Resta: %d\n", num1 - num2);
    printf("Multiplicacion: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}