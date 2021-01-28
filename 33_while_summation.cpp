#include <stdio.h>
//프로그램 사용자로부터 계속해서 정수를 입력받습니다.
//그리고 그 값을 계속 더해나갑니다. 
//그러나 프로그램 사용자가 0값을 입력하였을때는 프로그램을 종료하고
//그 합의 값을 출력하는 프로그램을 작성해 봅시다. 

main()
{
	int total = 0;
	int num = 1;
	
	while (num != 0)
	{
		printf ("insert number: \n");
		scanf ("%d", &num);
		total += num;     //total = total + num;
	}
	
	printf ("sum of the numbers= %d", total);
}
