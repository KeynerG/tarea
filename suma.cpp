#include <stdio.h>

int main(){

    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    //1- La funcion de scanf le da el valor a la variable, de num2,
    //no hay que asignarselo. 2- Le faltaba el operador & a la
    //variable
    scanf("%d", &num2); 

    int suma = num1 + num2;

    printf("La suma es: %d\n", suma);

    return 0;
}