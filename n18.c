//n.18
#include <stdio.h>

int main(int argc, char *argv[])
{

	int s1, h, m, s;
	do
	{
		printf("Inserisci n > 0:  ");
		scanf("%d", &s1);

	} while (s1 < 1);

	m = s1 / 60;
	s = s1 % 60;
	h = m / 60;
	m = m % 60;

	printf("%dh %dm %ds\n\n", h, m, s);

	return 0;
}