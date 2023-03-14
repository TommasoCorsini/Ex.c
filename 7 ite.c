//Dato N un numero intero positivo maggiore di 1, generare e visualizzare
//il numero precedente. 
#include <stdio.h>
int main (int argc, char *argv[])
{
    int N;
    do 
    {
        printf("inserire N > 1");
        scanf ("%d", &N);
        N = N -1;
        do
        {
            scanf("il numero vale %d", N);
        } while (N < 1);
        
    }while(n >= 0);
}