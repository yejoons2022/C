#include <stdio.h>

main()
{
	int k;
	printf ("�ݺ��Ǿ����� ���� �Է����ֽʽÿ�. \n");
	scanf ("%d", &k);
	int i,j;
		printf ("ù��° ������� �Է����ֽʽÿ�. \n");
	scanf ("%d", &i);
		printf ("�ι�° ������� �Է����ֽʽÿ�. \n");
	scanf ("%d", &j);
	
	for(int num=1; num<k; num++)
	{
		if(num%i==0 && num%j==0)
		    printf("3 �׸��� 4�� ���: %d \n", i, j, num);
		else if(num%i==0 || num%j==0)
		    printf("3 �Ǵ� 4�� ���: %d \n", i, j, num);
		else
		    printf ("NOTHING~ %d \n", num);
	}
}
