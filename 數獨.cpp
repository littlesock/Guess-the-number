#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int a, b;
	srand (time(NULL));
	a = (rand () % 100) + 1;
	b = 0;
	while (a != b)
	{
		printf ("1 - 100 =>");
		scanf ("%d", &b);
		if (a > b)
			printf ("Too small!\n");
		if (a < b)
			printf ("Too big!\n");
	}
	printf ("Bingo!\n");
	
	return 0;
}


