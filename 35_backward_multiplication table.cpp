#include <stdio.h>
//프로그램 사용자로부터 입력받은 숫자의 해당하는 구구단 프로그램을 작성하세요.
//5를 입력하면 5단이 출력되는 프로그램입니다.
//다만, 역순으로 나타나는 프로그램을 작성하세요.
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
