#include <stdio.h>

main()
{
	int i;
	long long result = 1;
	int k;
	printf ("���丮���� �Է��ϼ���. \n");
	scanf ("%d", &k);
	for (i = 1; i <= k; i++)
	{
		result = result * i;
		printf ("%d! = %lld \n", i, result);
	}
}
