#include <stdio.h>

main()
{
	int w;
	printf("�����ﰢ���� �غ��� ����(cm)�� �Է����ֽʽÿ�.");
	scanf("%d",&w);
	printf("�����ﰢ���� ������ ����(cm)�� �Է����ֽʽÿ�.");
	int h;
	scanf("%d",&h);
	
	float result = 0.5*(w*h);
	
	{
		printf("�����ﰢ���� ���̴� %fcm�Դϴ�.", result);
	}
	
}
