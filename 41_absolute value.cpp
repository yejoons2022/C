// 두 개의 정수를 입력받습니다.
// 두 개의 정수의 값을 뺄셈합니다.
// 단,  12 - 4 = 8     /     9 - 14 = 5 (절댓값) 

#include <stdio.h>

main()
{
	int a, b;
	printf ("Insert the number: \n");
	scanf ("%d %d", &a,&b);
	
	if (a - b > 1)
	{
		printf ("%d - %d = |%d| \n", a, b, a - b);
		printf ("%d - %d = %d", a, b, a - b);
	}
	
	else
	{
		printf ("%d - %d = |%d| \n", a, b, a - b);
		printf ("%d - %d = %d", a, b, b - a);
	}
}

