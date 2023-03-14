//Dato N un numero intero positivo, generare e visualizzare in ordine
//crescente i numeri compresi maggiori uguali di -N e minori uguali di N.
#include <stdio.h>
int main(int argc, char *argv[])
{
    int N, numeri;
        printf ("inserire N >= 0");
        do
        {
            scanf("%d", &N)
        }while(numeri < 0);
        N = - numeri;
        do
        {
            printf("il numero ha valenza %d", N);
        }while(numeri >= N);
        
    
    
return 0;
}
