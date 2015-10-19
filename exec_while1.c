#include <stdio.h>
/*
Imprime 5000 primeiros numeros pares
*/
int main()
{
    int numero = 0;
    
    while(numero<=100)
    {
        printf("%d - ", numero);
        numero = numero +2;
    }
    
    return 0;
}