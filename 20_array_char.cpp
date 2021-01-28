#include <stdio.h>

main()
{
	char munja[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	
	for (int i = 0; i <= 6; i++)
	{
		printf ("%d번째 있는 munja는 %d입니다. \n", i+1, munja[i]);
	}
}
