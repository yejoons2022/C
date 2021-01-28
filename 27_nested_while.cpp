#include <stdio.h>

main()
{
	int i = 0, j = 0;
	
	while (i < 30)
	{
		while (j < i)
		{
			printf("o ");
			j++;
		}
		
		j = 0;
		printf(" \n");
		i++;
	}
}
