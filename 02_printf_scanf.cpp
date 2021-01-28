#include <stdio.h>

main()
{
    int number1;
    int number2;
	
	printf ("number1의 정수를 입력하세요 \n");
	scanf ("%d", &number1);
	printf ("number2의 정수를 입력하세요 \n");
	scanf ("%d", &number2); 
	
	printf ("%d + %d = %d 입니다. \n", number1, number2, number1+number2);
	
	number1 = 1234;
	number2 = 4321;
	
	printf ("%d + %d = %d 입니다. \n", number1, number2, number1+number2);
}
