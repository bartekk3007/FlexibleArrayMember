#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct gracz 
{
	int wiek;
	char imie[];
};

int main(void)
{
	struct gracz *g1;
	g1 = malloc(sizeof(struct gracz) + 4);

	if (g1)
	{
		g1->wiek = 22;
		strcpy_s(g1->imie, 4, "Jan");
		printf("%s\n", g1->imie);
		free(g1);
	}
	

	return 0;
}