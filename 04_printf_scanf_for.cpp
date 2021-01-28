# include <stdio.h>

main()
{
	int i;
	int k;
	printf("k값을 입력하세요. \n");
	scanf ("%d", &k);
	for (i = 0; i < k; i++)
	{
		printf ("%d의 반복 \n", i);
	}
	printf ("반복문 끝!!!!!");
}
