#include <stdio.h>

int main(){
    printf("Programa para encontrar el MCD de dos numeros con For\n"); //Indico que tipo de programa estoy realizando
    int numero1,numero2,minimo,mcd; //Defino variables
    printf("Ingresa un numero\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero1); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Ingresa otro numero\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero2); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    if(numero1<numero2){ //Estructura Condicional Doble para que se compare cual numero es el menor
        minimo=numero1;
    } else{
        minimo=numero2;
    }
    for(int i=1;i<minimo;i++){/*Inicializo que i sea igual a 1, establezco que el bucle termine cuando i sea mayor minimo,
    y que en cada iteracion a i se le sume 1*/
        if (numero1%i==0 && numero2%i==0){ //Estructura Condicional Simple para comparar y en caso de ser cierto que se guarde i
        mcd=i; //Variable donde se guarda i 
        }
    } 
    printf("El MCD de %d y %d es: %d", numero1,numero2,mcd); //Indico el resultado del calculo realizada 
    return 0;
}
