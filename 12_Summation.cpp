#include <stdio.h>

main()
{
	int total=0;
	int i, num;
	printf("0���� num������ ����, num��?");
	scanf("%d", &num);
	
	for(i=0; i<num+1; i++)
	{
		total = total + i;
		printf("0���� %d������ ���� ���: %d i = %d \n", num, total, i);
	} 
	 // a = a + 2     ==     a+=2
	 // a = a * 2     ==     a*=2
} 
