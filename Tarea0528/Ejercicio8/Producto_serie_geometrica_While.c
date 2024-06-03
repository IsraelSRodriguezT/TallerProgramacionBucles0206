#include <stdio.h>

int main(){
    printf("Programa para calcular el producto de los primeros n terminos de una serie geometrica con While\n"); //Indico que tipo de programa estoy realizando
    int numeros,ptermino,snumeros=1,diferencia,aux=0; //Defino variables
    printf("Escribe cuantos terminos va a tener la serie geometrica\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe la diferencia que va a tener la serie entre sus terminos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &diferencia); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe el termino con el que va a empezar tu serie\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &ptermino); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    while(aux<numeros){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a numeros
        if (aux==(numeros-1)){ //Estructura Condicional Doble para que deje de presentarse el *
            printf("%d=", ptermino);
        } else{
            printf("%d*", ptermino);
        }
        snumeros*=ptermino; //Variable donde se guarda y se le suma el valor de ptermino
        ptermino*=diferencia; //Se busca que el valor de ptermino cambie por la diferencia
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizada 
    return 0;
}