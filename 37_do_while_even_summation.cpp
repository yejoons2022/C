#include <stdio.h>
//0�̻� 100������ ���� �߿��� ¦�� ���� ���� ���ϴ� ���α׷��� �ۼ��ϼ���.
//do~while�� �̿� ���.  

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
