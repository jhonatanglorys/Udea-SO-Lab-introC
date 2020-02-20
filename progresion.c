#include <stdio.h>
#include <math.h>

int main(){
    int base, expo, suma;
    suma = 0;
    printf("Ingrese la base y el maximo exponente de la progresión geométrica");
    scanf("%d %d", &base, &expo);
    for (int i=0;i<=expo;i++){
        suma += pow(base, i);
    }
    printf("La suma es %d\n", suma);
    return(0);
}