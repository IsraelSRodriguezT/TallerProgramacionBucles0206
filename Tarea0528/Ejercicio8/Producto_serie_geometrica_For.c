#include <stdio.h>

int main(){
    printf("Programa para calcular el producto de los primeros n terminos de una serie geometrica con For\n"); //Indico que tipo de programa estoy realizando
    int numeros,ptermino,snumeros=1,diferencia; //Defino variables
    printf("Escribe cuantos terminos va a tener la serie geometrica\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &numeros); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe la diferencia que va a tener la serie entre sus terminos\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &diferencia); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    printf("Escribe el termino con el que va a empezar tu serie\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &ptermino); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    for(int i=0;i<numeros;i++){ /*Inicialaizo que i es igual a 0, establezco que el bucle termine cuando i sea mayor a numeros,
    y que en cada iteracion a i se le sume 1*/
        if (i==(numeros-1)){ //Estructura Condicional Doble para que deje de presentarse el *
            printf("%d=", ptermino);
        } else{
            printf("%d*", ptermino);
            
        }
        snumeros*=ptermino; //Variable donde se guarda y se le suma el valor de ptermino
        ptermino*=diferencia; //Se busca que el valor de ptermino cambie por la diferencia
    }
    printf("%d", snumeros); //Indico el resultado del calculo realizada 
    return 0;
}