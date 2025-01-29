#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    //La comparacion del if estaba mal
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("El número es múltiplo de 3 y 5.\n");
    } else {
        printf("El número no es múltiplo de 3 y 5.\n");
    }

    return 0;
}