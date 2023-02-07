//n11
/*Scrivi un programma che legge da argv[1] un numero intero positivo (N) e poi
disegna a terminale un quadrato vuoto composto di asterischi (‘*’)
con il lato lungo N:

Per N pari a 3 il programma stampa:

***
* *
***
Per N pari a 5 il programma stampa:

*****
*   *
*   *
*   *
******/
#include <stdio.h>


int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("error\n");
        exit(0);
    }

    int n = atoi(argv[1]);

    if (n <= 0)
    {
        printf("argv[1] > 0\n");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int b = 0; b < n; b++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int b = 0; b < n; b++)
            {
                if (b == 0 || b == n - 1)
                    printf("* ");
                else
                    printf("  ");
            }
        }

        printf("\n");
    }
}