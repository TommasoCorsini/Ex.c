//Dati due numeri interi e positivi N1 e N2 con N2>N1, generare e
//visualizzare in ordine decrescente i numeri compresi tra N1 e N2. 
#include <stdio.h>

int main(int argc, char *argv[])
{

	int N1, N2, k;
	do
	{

		do
		{
			printf("inserire N1 >= 1 : ");
			scanf("%d", &N1);
		} while (N2 < 0);

		do
		{
			printf("inserire N2 >= 1 : ");
			scanf("%d", &N2);
		} while (N2 < 0);
		printf("\n");
	} while (N2 <= N1);

	k = N1;
	//esercizio non completo, manca la parte conclusiva
    //relativa alla stampa dei numeri

	return 0;
}