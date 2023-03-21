//n4
#include <stdio.h>

int main(int argc, char *argv[])
{

	int i = 0, n;

	do
	{										   
		printf("Inserisci un numero >= 0 : "); 
		scanf("%d", &n);					   
	} while (n < 0);						  

	do
	{									   
		printf("il numero vale: %d\n", i); 
		i = i + 2;						   
	} while (i <= n);					   

	return 0;
}