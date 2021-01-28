//1 이상 100 이하의 배수 중에서 7의 배수와 9의 배수를 출력하는 프로그램을
//작성해 보세요!
 
#include <stdio.h>

main()
{
	int a, b;
	
	for (a = 1; a <= 14; a++)
	{
		printf ("%d \n", a * 7);
	}
	
	printf (" \n");
	
	for (b = 1; b <= 11; b++)
	{
		printf("%d \n", b * 9);
	}
}
