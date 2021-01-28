#include <stdio.h>
//프로그램 사용자로부터 두 개의 정수를 입력받습니다.
//두 개의 정수 사이에 있는 수들의  합을 구하는 프로그램을 작성합니다. 
//ex)45   49   45+46+47+48+49

main()
{
	int total = 0;
	int begin, end;
	printf("두 개의 정수를 입력하세요. \n");
	scanf("%d %d", &begin, &end);
	
	if (begin < end)
		for(total = 0; begin <= end; begin++)
		{
			total += begin;
		}
		else
		{
			printf ("error: please decrease the begin value. \n");
		}
	
	printf("total is %d.", total);
	
	main();
}
