#include <stdio.h>
//프로그램 사용자로부터 양의 정수를 하나 입력받은 다음,
//그 수만큼 3의 배수를 출력하는 프로그램을 작성해 봅시다.
//예를 들어 5를 입력하였다면 3 6 9 12 15 를 출력해야 합니다. 

main()
{
	int num = 0;
	int count = 1;
	printf ("insert number \n");
	scanf ("%d", &num);
	
	while(count <= num)
	{
		printf ("%d  ", count*3);
		count++;
	}
}
