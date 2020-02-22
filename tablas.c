#include <stdio.h>

int main(){
    int numero, aux;
    printf("Ingrese el número:\n");
    scanf("%d", &numero);
    if(numero >0){
        printf("Tabla de multiplicacion desde 1 hasta: %d\n", numero);
        for (int i=1; i<=numero; i++){
        for (int j=1; j<11; j++){
            aux = i*j;
            printf("%dx%d=%d ", i,j, aux);
        }
        printf("\n");
    }
    return (0);
    } else {
        printf("El número ingresado debe ser mayor a 0");
    }
    
}