#include <stdio.h>
//���α׷� ����ڷκ��� �� ���� ������ �Է¹޽��ϴ�.
//�� ���� ���� ���̿� �ִ� ������  ���� ���ϴ� ���α׷��� �ۼ��մϴ�. 
//ex)45   49   45+46+47+48+49

main()
{
	int total = 0;
	int begin, end;
	printf("�� ���� ������ �Է��ϼ���. \n");
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
