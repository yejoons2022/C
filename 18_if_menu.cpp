#include <stdio.h>

main()
{
	int a = 100;
	int b = 17;
	int select;
	printf ("1~4�� ��ȣ�� �����ϼ���.(��Ģ����) \n");
	scanf ("%d", &select);
	if (select == 1)
	{
		printf ("������ ���� %d �Դϴ�. \n", a+b);
	}
	else if (select == 2)
	{
		printf ("�E���� ���� %d �Դϴ�. \n", a-b);
	}
	else if (select == 3)
	{
		printf ("������ ���� %d �Դϴ�. \n", a*b);
	}
	else if (select == 4)
	{
		printf ("�������� ���� %d �Դϴ�. \n", a%b);
	}
	else
	{
		printf ("1~4������ ��Ȯ�� ���� �Է��ϼ���. \n");
	}


}

