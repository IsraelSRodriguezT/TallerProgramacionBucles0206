#include <stdio.h>

int main(){
    printf("Programa para calcular la potencia de un numero mediante sumas sucesivas con While\n"); //Indico que tipo de programa estoy realizando
    int num,pot,resultado=1,aux=0; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &num); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escriba el numero al que debe estar elevado\n"); //Indico que el usuario ingrese el numero del exponente
    scanf("%d", &pot); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("%d^%d=",num,pot); //Indico que tipo de calculo estoy realizando
    while (aux<pot){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux deje de ser menor del de pot
        if (aux==(pot-1)){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el *
            printf("%d=",num);
        } else {
            printf("%d*",num);
        }
        resultado*=num; //Aqui se va a ir guardando la multiplicacion de lo que se guardo anteriormente y lo multiplica por num
        aux++; //Establezco que en cada iteracion a aux se le sume 1 
    } 
    printf("%d\n",resultado); //Indico el resultado de la potencia realizada
    return 0;
}