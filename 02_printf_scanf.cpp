#include <stdio.h>

main()
{
    int number1;
    int number2;
	
	printf ("number1�� ������ �Է��ϼ��� \n");
	scanf ("%d", &number1);
	printf ("number2�� ������ �Է��ϼ��� \n");
	scanf ("%d", &number2); 
	
	printf ("%d + %d = %d �Դϴ�. \n", number1, number2, number1+number2);
	
	number1 = 1234;
	number2 = 4321;
	
	printf ("%d + %d = %d �Դϴ�. \n", number1, number2, number1+number2);
}
