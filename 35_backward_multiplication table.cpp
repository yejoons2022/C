#include <stdio.h>
//���α׷� ����ڷκ��� �Է¹��� ������ �ش��ϴ� ������ ���α׷��� �ۼ��ϼ���.
//5�� �Է��ϸ� 5���� ��µǴ� ���α׷��Դϴ�.
//�ٸ�, �������� ��Ÿ���� ���α׷��� �ۼ��ϼ���.
//ex) 5*9 5*8 5*7 ... 

main()
{
	int num = 0;
	int mul = 9;
	printf ("Insert number: ");
	scanf ("%d", &num);
	
	while (mul >= 1)
	{
		printf ("%d * %d = %d \n", num, mul, num*mul);
		mul--;
	} 
}
