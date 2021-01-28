#include <stdio.h>

main()
{
	int cur, is;
	int i, j;
	printf ("i값 입력 \n");
	scanf ("%d", &i);
	printf ("j값 입력 \n");
	scanf ("%d", &j);
	
	for(cur=2; cur<=i; cur++)
	{
		for(is=1; is<=j; is++)
		{
			printf("%d x %d = %d \n", cur, is, cur*is);
		}
		printf("\n");
	}
}
