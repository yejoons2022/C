#include <stdio.h>
//0이상 100이하의 정수 중에서 짝수 값의 합을 구하는 프로그램을 작성하세요.
//do~while문 이용 장려.  

main()
{
	int total = 0;
	int num = 0;
	
	do
	{
		total += num;
		printf ("%d   %d \n", num, total);     //total = total + num;
		num += 2;
	} while(num <= 100); 
	
	printf ("The sum is %d.", total);
}
