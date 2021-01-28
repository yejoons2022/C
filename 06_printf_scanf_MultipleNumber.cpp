#include <stdio.h>

main()
{
	int k;
	printf ("반복되어지는 값을 입력해주십시오. \n");
	scanf ("%d", &k);
	int i,j;
		printf ("첫번째 배수값을 입력해주십시오. \n");
	scanf ("%d", &i);
		printf ("두번째 배수값을 입력해주십시오. \n");
	scanf ("%d", &j);
	
	for(int num=1; num<k; num++)
	{
		if(num%i==0 && num%j==0)
		    printf("3 그리고 4의 배수: %d \n", i, j, num);
		else if(num%i==0 || num%j==0)
		    printf("3 또는 4의 배수: %d \n", i, j, num);
		else
		    printf ("NOTHING~ %d \n", num);
	}
}
