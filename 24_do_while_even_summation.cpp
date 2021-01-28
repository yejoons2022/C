#include <stdio.h>

main()
{
	int total = 0;
	int number = 0;
	int k;
	scanf ("%d", &k);
	
	do
	{
		total = total + number;
		number = number + 2;
	}while (number <= k);
	
	printf("The sum is %d." ,total);
}
