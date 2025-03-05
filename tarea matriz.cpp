#include <iostream>
#include <conio.h>

using namespace std;

#define FILAS 3
#define COLUMNAS 3

// Funcion para imprimir la matriz
void printMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {

    // Aqui se contruye la matriz insertando los valores de forma normal utilizando un contador en decremento
    int matriz[FILAS][COLUMNAS];
    int num = 0;

    num = FILAS * COLUMNAS;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = num--;
        }
    }

    // Aqui se contruye la matriz insertando los valores de forma inversa
    int matriz2[FILAS][COLUMNAS];
    int num2 = 1;

    for (int i = FILAS-1; i >= 0; i--) {
        for (int j = COLUMNAS-1; j >= 0; j--) {
            matriz2[i][j] = num2++;
        }
    }

    printMatriz(matriz);
    //printMatriz(matriz2);

    getch();  

    return 0;
}