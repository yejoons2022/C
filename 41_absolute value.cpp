// �� ���� ������ �Է¹޽��ϴ�.
// �� ���� ������ ���� �����մϴ�.
// ��,  12 - 4 = 8     /     9 - 14 = 5 (����) 

#include <stdio.h>

main()
{
	int a, b;
	printf ("Insert the number: \n");
	scanf ("%d %d", &a,&b);
	
	if (a - b > 1)
	{
		printf ("%d - %d = |%d| \n", a, b, a - b);
		printf ("%d - %d = %d", a, b, a - b);
	}
	
	else
	{
		printf ("%d - %d = |%d| \n", a, b, a - b);
		printf ("%d - %d = %d", a, b, b - a);
	}
}

