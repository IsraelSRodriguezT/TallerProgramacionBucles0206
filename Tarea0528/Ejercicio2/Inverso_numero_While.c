#include <stdio.h>

int main(){
    printf("Programa para obtener el inverso de un numero con While\n"); //Indico que tipo de programa estoy realizando
    int num,inum=0,numero; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    while(numero>0){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de i deje de ser mayor de 0
        num=numero%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        inum=inum*10+num; //En cada iteracion multiplico por 10 para que crezca en un digito e ir sumando el valor del residuo
        numero/=10; //Establezco que en cada iteracion numero sea dividido para 10
    }
    printf("%d\n",inum); //Indico el numero inverso del numero que se proporciono al principio
    return 0;
}