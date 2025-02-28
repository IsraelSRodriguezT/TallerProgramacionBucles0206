#include <stdio.h>
int main (){
    printf("Programa para sumar los digitos de un numero con Do While\n"); //Indico que tipo de programa estoy realizando
    int aux=0,pdec=0,numero; //Defino variables
    printf("Escriba un numero para realizar el calculo\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numero); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    do { //Estructuro mi bucle
        pdec= numero%10; //En esta variable se guarda el residuo de dividirlo para 10, entonces el valor entero
        aux+=pdec; // En esta variable se va guardando y sumando cada residuo, para asi presentarlo al final  
        if (numero<10){ //Estructura Condicional Doble para especificar cuando debe dejar de mostrarme al final el +
            printf("%d=",pdec);
        }else{
            printf("%d+",pdec);
        }
        numero/=10; //Establezco que en cada iteracion numero sea dividido para 10
    } while (numero>0); //Establezco mi condicion para buscar que el bucle termine cuando el valor de i deje de ser mayor de 0
    printf("%d\n",aux); //Indico la suma de los digitos del numero que utilize al principio
    return 0;
}