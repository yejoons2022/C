#include <stdio.h>

main()
{
	int array[8];
	
	printf ("�迭���� �Է��ϼ���. \n");
	
	for (int i = 0; i < 8; i++)
	{
		scanf ("%d", &array[i]);
	}
	
	for (int j = 0; j < 8; j++)
	{
		printf ("�Է��� �迭�� ���� %d�Դϴ�. \n", array[j]);
	}
}
