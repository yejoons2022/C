//Ű�� 187.5cm �̻��̰� �����԰� 80.0kg �̸��̸� ok�� ����ϰ�,
//������ ��� cancel�� ����ϴ� ���α׷��� �ۼ��մϴ�. 

#include <stdio.h>

main()
{
	double height, weight;
	printf ("Ű(cm)�� ������(kg)�� ���� ǥ�����ֽʽÿ�. \n");
	scanf ("%lf %lf", &height, &weight);
	
	if (height >= 187.5 && weight < 80.0)
	{
		printf ("ok");
	}
	
	else
	{
		printf ("cancel");
	}
}
