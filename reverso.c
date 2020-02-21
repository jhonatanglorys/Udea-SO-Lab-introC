#include <stdio.h>

int main(){
    int num, rev, restante;
    rev=0;
    printf("Ingrese un número");
    scanf("%d", &num);
    while(num != 0){
        restante = num % 10;
        rev = rev * 10 + restante;
        num /= 10;
    }   
    printf("El número en reversa es = %d", rev);
    return 0;
}