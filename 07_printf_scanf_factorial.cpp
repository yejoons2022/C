#include <stdio.h>

main()
{
	int i;
	long long result = 1;
	int k;
	printf ("팩토리얼값을 입력하세요. \n");
	scanf ("%d", &k);
	for (i = 1; i <= k; i++)
	{
		result = result * i;
		printf ("%d! = %lld \n", i, result);
	}
}
