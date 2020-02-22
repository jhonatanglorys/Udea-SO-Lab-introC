#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()

int generar_aleatorios(int num1, int num2);
int mayor(int num1, int num2);
int menor(int num1, int num2);
char mostrarMensaje(int posicion, char arreglo[]);

int main(){
    char *correctas[4];
    char *incorrectas[4];
    correctas[0]="Muy bien!";
    correctas[1]="Excelente!";
    correctas[2]="Buen trabajo!";
    correctas[3]="Sigue haciéndolo bien!";
    
    incorrectas[0]="No. Por favor trata de nuevo.";
    incorrectas[1]="Incorrecto. Trata una vez más.";
    incorrectas[2]="No te rindas!";
    incorrectas[3]="No. Trata de nuevo";
    int resultado, intentos, mensaje;
    char temp;
    intentos=0;
    srand(time(NULL)); //genera la semilla
    int op1, op2, salir;
    op1 = generar_aleatorios(1,10);
    op2 = generar_aleatorios(1,10);
    mensaje=generar_aleatorios(0,3);
    printf("¿Cuánto es %d veces %d?", op1, op2);
    scanf("%d", &resultado);
    while(resultado != (op1*op2)){
        //temp = mostrarMensaje(mensaje,incorrectas);
        mensaje=generar_aleatorios(0,3);
        //printf(mostrarMensaje(mensaje,incorrectas));
        switch (mensaje)
        {
            case 0:
                printf(incorrectas[0]);
                break;
            case 1:
                printf(incorrectas[1]);
                break;
            case 2:
                printf(incorrectas[2]);
                break;
            case 3:
                printf(incorrectas[3]);
                break;
            default:
                break;
        }
        //printf(incorrectas[mensaje]);
        scanf("%d", &resultado);
        intentos++;
        if (intentos>4){
            printf("Presiona 0 si quieres dejar de intentar");
            scanf("%d", &salir);
            if(salir==0){
                return 0;
            }
        }
    }
    mensaje=generar_aleatorios(0,3);
        switch (mensaje)
        {
            case 0:
                printf(correctas[0]);
                break;
            case 1:
                printf(correctas[1]);
                break;
            case 2:
                printf(correctas[2]);
                break;
            case 3:
                printf(correctas[3]);
                break;
            default:
                break;
        }
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
char mostrarMensaje(int posicion, char arreglo[]){
    switch (posicion)
    {
        case '0':
        return arreglo[0];
        break;

        case '1':
        return arreglo[1];
        break;

        case '2':
        return arreglo[2];
        break;

        case '3':
        return arreglo[3];
        break;
    
        default:
            break;
    }
}