#include <stdio.h>

main()
{
	int total = 0;
	int number = 0;
	
	do
	{
		printf("In order to end the code, insert 0. \n");
		printf("���� �Է� : ");
		scanf("%d", &number);
		total = total + number;
	}while (number != 0);
	
	printf("���� ���� %d �Դϴ�.", total);
}
