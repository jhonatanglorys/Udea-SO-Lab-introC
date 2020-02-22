#include <stdio.h>

int main(){
    int ventas, aux;
    float comision;
    printf("Ingrese el número de ventas:");
    scanf("%d", &ventas);

    if(ventas<0){
        printf("El numero de ventas no puede ser negativo");
        return(0);
    } else if(ventas<20001){
        comision=ventas*0.05;
    } else if (ventas>20000 && ventas<50001){
        aux = ventas - 20000; 
        comision= (aux*0.07) + 1000;
    } else {
        aux = 50000 - ventas; 
        comision= (aux*0.1) + 3100;
    }

    printf("La comision es de : %f\n", comision);
    return(0);
}