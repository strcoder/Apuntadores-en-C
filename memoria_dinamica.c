#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double **M;
    int m, n;
}MATRIZ;

MATRIZ asignar_memoria(int N);
void alojar_memoria(MATRIZ *matriz, int m, int n);
void leer_matriz(MATRIZ *matriz);
void llenar_matriz(MATRIZ *matriz);
void liberar_memoria(MATRIZ *matriz);

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

/* Asigna memoria para el numero total de matrices dentro del documento */
MATRIZ asignar_memoria(int N) 
{
    return (MATRIZ*) malloc(sizeof(MATRIZ) * N);
}

/* Asigna memoria para cada una de las matrices y el numero de sus elementos */
void alojar_memoria(MATRIZ *matriz, int m, int n)
{
    matriz->m = m;
    matriz->n = n;

    matriz->M = (double**) malloc(sizeof(double*) * matriz->m);

    for (int i = 0; i < matriz->m; i++) {
        matriz->M[i] = (double*) malloc(sizeof(double) * matriz->n);
    }
}

/* Hacer lectura de todos los elementos de las matrices */
void leer_matriz(MATRIZ *matriz)
{
    int i,j;
    for (i = 0; i < matriz->m; i++) {
        for (j = 0; j < matriz->n; j++) {
            scanf("%lf", &matriz->M[i][j]);
        }
    }
}

void llenar_matriz(MATRIZ *matriz)
{

}

/* Libera el espacio en memoria que se acupo para las matrices */
void liberar_memoria(MATRIZ *matriz)
{
    for(int i = 0; i < matriz->m; i++) {
        free(matriz->M[i]);
    }

    free(matriz->M);
}