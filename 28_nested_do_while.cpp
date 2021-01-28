#include <stdio.h>

main()
{
	int cur = 1;
	int is = 0;
	do{
		is = 0;
		do
		{
			printf ("%d * %d = %d \n", cur, is, cur*is);
			is++;
		}while(is < 10);
		cur++;
		printf("\n");
		}while(cur < 10);
}
