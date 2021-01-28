#include <stdio.h>

main()
{
	int array[8];
	
	printf ("배열값을 입력하세요. \n");
	
	for (int i = 0; i < 8; i++)
	{
		scanf ("%d", &array[i]);
	}
	
	for (int j = 0; j < 8; j++)
	{
		printf ("입력한 배열의 값은 %d입니다. \n", array[j]);
	}
}
