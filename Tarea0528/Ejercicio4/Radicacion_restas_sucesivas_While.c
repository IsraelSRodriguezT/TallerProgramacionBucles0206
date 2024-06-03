#include <stdio.h>
#include <math.h>

int main() {
    printf("Programa para calcular la raiz n de un numero utilizando restas sucesivas con While\n"); //Indico que tipo de programa estoy realizando
    double base,resultado; //Defino variables decimales
    printf("Escribe un numero entero al que le quieras sacar raiz\n"); //Indico que el usuario ingrese un numero
    scanf("%lf", &base); //Utilizo scanf %lf para que se pueda leer un valor numerico decimal desde el teclado
    if (base<0){ //Estructura Condicional Simple para que si el valor de base fuera negativo pues el programa no se ejecute
        printf("No se puede calcular la raiz de un numero negativo\n");
        return 1;
    }
    int raiz,aux=0; //Defino variables enteras
    printf("Escribe un valor entero para la raiz\n"); //Indico que el usuario ingrese un numero
    scanf("%d", &raiz); //Utilizo scanf %d para que se pueda leer un valor numerico entero desde el teclado
    double exponente= (1.0/raiz); //Defino variable decimal que expresa el valor de raiz pero en forma de potencia
    while(aux<1){ //Establezco mi condicion para buscar que el bucle termine cuando el valor de aux sea mayor a 1
        resultado=pow(base, exponente); //Variable donde se asigna el resultado de realizar la potencia (pow)
        aux++; //Establezco que en cada iteracion a aux se le sume 1
    }
    printf("El resultado de %d^(1/%d) es: %.2lf\n", (int)base,raiz,resultado); //Indico el resultado del calculo realizado
    return 0;
}
