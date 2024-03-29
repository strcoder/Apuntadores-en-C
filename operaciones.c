#include <stdio.h>

void suma (double *a, double *b, double *c);
void resta (double *a, double *b, double *c);
void multiplicacion (double *a, double *b, double *c);
void division (double *a, double *b, double *c);
void factorial (double *a, double *c);

int main(int argc, char const *argv[])
{
    double a, b, c;
    printf("Digite los numeros a operar: \n");
    
    printf("Numero a: ");
    scanf("%lf", &a);

    printf("Numero b: ");
    scanf("%lf", &b);
    
    suma(&a, &b, &c);
    printf("La suma es: %.2lf\n", c);

    resta(&a, &b, &c);
    printf("La resta es: %.2lf\n", c);

    multiplicacion(&a, &b, &c);
    printf("La multiplicacion es: %.2lf\n", c);

    division(&a, &b, &c);
    printf("La division es: %.2lf\n", c);

    factorial(&a, &c);
    printf("El factorial de %.2lf es: %.2lf\n", a, c);
    
    return 0;
}

/* Guarda el resultado de la suma dentro del apuntado c */
void suma (double *a, double *b, double *c) 
{
    *c = *a + *b;
    return;
}

/* Guarda el resultado de la resta dentro del apuntado c */
void resta (double *a, double *b, double *c) 
{
    *c = *a - *b;
    return;
}

/* Guarda el resultado de la multiplicación dentro del apuntado c */
void multiplicacion (double *a, double *b, double *c) 
{
    *c = *a * *b;
    return;
}


/* Guarda el resultado de la división dentro del apuntado c */
void division (double *a, double *b, double *c) 
{
    *c = *a / *b;
    return;
}

/* Guarda el resultado del factorial del numero a dentro del apuntado c */
void factorial (double *a, double *c) 
{
    if (*a == 0) {
        *c = 1;
    } else {
        *c = 1;
        for (int i = 1; i <= *a; i++) {
            *c = *c * i;
        }
    }
    return;
}