#include <stdio.h>

main()
{
	int a;
	printf ("�̹� �б� ������ ���� ����!");
	scanf("%d", a);
	
	{
		if(a>90)
		printf("���߾�! �̹� �б� ������ A��!");
		
		else if(a>80 && a<90)
		printf("B..���� �׷���");
		
		else if(a>70 && a<80)
		printf("C���, ���̳� �Ŵ� �Ҹ���?");
		
		else if(a>60 && a<90)
		printf("D.. �ʴ� �׳� ���θ� ���°� ���ڴ�");
		
		else
		printf("F��. ���� ���� �ʿ��� ����");
	}
}

