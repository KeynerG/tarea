#include <stdio.h> 

int main() {
    
    int n;
    printf("Ingrese un número: ");
    // Se debe usar &
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Falta poner el indicador del tipo para la variable i
        printf("Número actual: %d\n", i);
    }

    return 0;
}
