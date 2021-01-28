#include <stdio.h>

main()
{
	int total=0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은?");
	scanf("%d", &num);
	
	for(i=0; i<num+1; i++)
	{
		total = total + i;
		printf("0부터 %d까지의 덧셈 결과: %d i = %d \n", num, total, i);
	} 
	 // a = a + 2     ==     a+=2
	 // a = a * 2     ==     a*=2
} 
