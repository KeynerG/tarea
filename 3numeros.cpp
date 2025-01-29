#include <stdio.h>

int main() {
    int num1, num2, num3;
    int numeroMayor, numerosIguales = 0;

    // Entrada de los tres números
    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    numeroMayor = num1;

    //Comparación con el segundo número
    if (num2 > numeroMayor) {
        numeroMayor = num2;
        numerosIguales = 0;  //Se reinicia si se encuantra uno mayor
    } else if (num2 == numeroMayor) {
        numerosIguales++;
    }

    //Comparación con el tercer número
    if (num3 > numeroMayor) {
        numeroMayor = num3;
        numerosIguales = 0;
    } else if (num3 == numeroMayor) {
        numerosIguales++;
    }

    printf("El numero mayor es: %d\n", numeroMayor);
    if (numerosIguales > 0) {
        printf("El numero mayor se repite %d veces.\n", numerosIguales + 1);
    }

    return 0;
}
