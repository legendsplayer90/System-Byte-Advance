#include <stdio.h> //incluimos stdio.h para funciones input/output como **printf**

int main(){
int x = 10; //creamos variable "x" de tipo de datos enteros.
int *puntero; //creamos un puntero a entero
  
puntero = &x; //"puntero" ahora apuntara hacia la dirrecion de memoria de la variable "x"

printf("VALOR DE X: %d\n", x); //hacemos un printf e imprimimos el valor de "x" desde la variable (no desde el puntero)
printf("Direccion de memoria: %p\n", &x); //imprimimos la dirreccion de memoria de la variable "x"
printf("valor desde puntero: %d\n", *puntero); //imprimimos el valor de "x" desde el puntero

return 0; //termina el programa
}
