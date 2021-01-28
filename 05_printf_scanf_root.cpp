# include <stdio.h>

main ()
{
	int i;
	int k;
	printf("반복되는 k값을 입력하세요. \n");
	scanf ("%d", &k);
	for (i = 1; i < k; i++)
	{
		printf ("%d의 제곱근은 %d 입니다. \n", i, i*i);
	}
}
