# include <stdio.h>

main ()
{
	int i;
	int k;
	printf("�ݺ��Ǵ� k���� �Է��ϼ���. \n");
	scanf ("%d", &k);
	for (i = 1; i < k; i++)
	{
		printf ("%d�� �������� %d �Դϴ�. \n", i, i*i);
	}
}
