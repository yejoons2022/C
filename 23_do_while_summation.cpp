#include <stdio.h>

main()
{
	int total = 0;
	int number = 0;
	
	do
	{
		printf("In order to end the code, insert 0. \n");
		printf("정수 입력 : ");
		scanf("%d", &number);
		total = total + number;
	}while (number != 0);
	
	printf("최종 합은 %d 입니다.", total);
}
