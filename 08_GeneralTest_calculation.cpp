#include <stdio.h>

main()
{
	char sel;
	int num1 = 100;
	int num2 = 50;
	
	printf ("�����ڸ� �����ϼ���. \n");
	printf ("add.���� sub.�E�� mul.���� div.������ \n");
	scanf ("%c", &sel);
	
	if(sel == 'add')
	{
		printf("%d", num1+num2);
	}
	else if(sel == 'sub')
	{
		printf("%d", num1-num2);
	}
	else if(sel == 'mul')
	{
		printf("%d", num1*num2);
	}
	else if(sel == 'div')
	{
		printf("%d", num1/num2);
	}
	else
	{
		printf("�߸��� ���Դϴ�.");
	}
} 
