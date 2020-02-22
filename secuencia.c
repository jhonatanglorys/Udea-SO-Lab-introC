#include <stdio.h>
#include <string.h>

int main(){
    int renglones;
    char temp[100] = "1", cero[] = "0",  uno[] = "1";
    printf("Ingrese el número de renglones.");
    scanf("%d", &renglones);
    if(renglones >0){
        printf("%s\n", temp);
        for(int i=0; i<renglones; i++){
            if(i % 2 == 0){
                strcat(temp, cero);
            } else {
                strcat(temp, uno);
            }
            printf("%s\n", temp);
            
        }
    }
    return 0;
}