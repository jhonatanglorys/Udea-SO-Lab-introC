#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()

int generar_aleatorios(int num1, int num2);
int mayor(int num1, int num2);
int menor(int num1, int num2);

int main(){
    int resultado, intentos;
    intentos=0;
    srand(time(NULL)); //genera la semilla
    int op1, op2, salir;
    op1 = generar_aleatorios(1,10);
    op2 = generar_aleatorios(1,10);
    printf("¿Cuánto es %d veces %d?", op1, op2);
    scanf("%d", &resultado);
    while(resultado != (op1*op2)){
        printf("No. Por favor intenta nuevamente");
        scanf("%d", &resultado);
        intentos++;
        if (intentos>3){
            printf("Presiona 0 si quieres dejar de intentar");
            scanf("%d", &salir);
            if(salir==0){
                return 0;
            }
        }
    }
    printf("Muy bien!");
    return 0;
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}