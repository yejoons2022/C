#include <stdio.h>

main()
{
	int array1[5];
	char array2[5];
	
	for (int i = 0; i < 5; i++)
	{
		scanf ("%d", &array1[i]);
	}
	
		for (int i = 0; i < 5; i++)
	{
		printf ("%d   ", array1[i]);
	}
	
	printf ("\n");
	
		for (int i = 0; i < 5; i++)
	{
		scanf ("%c", &array2[i]);
	}
	
		for (int i = 0; i < 5; i++)
	{
		printf ("%c", &array2[i]);
	}
}
