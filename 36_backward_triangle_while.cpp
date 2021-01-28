#include <stdio.h>

main()
{
	int i = 10;
	int j = 0;
	
	while (i >= 0)
	{
		while (j < i)
		{
			printf("o ");
			j++;
		}
		j = 0;
		printf ("* \n");
		i--;
	}
}
