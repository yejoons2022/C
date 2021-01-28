#include <stdio.h>

main()
{
	int a = 100;
	int b = 17;
	int select;
	printf ("1~4번 번호를 선택하세요.(사칙연산) \n");
	scanf ("%d", &select);
	if (select == 1)
	{
		printf ("덧셈의 값은 %d 입니다. \n", a+b);
	}
	else if (select == 2)
	{
		printf ("뺼셈의 값은 %d 입니다. \n", a-b);
	}
	else if (select == 3)
	{
		printf ("곱셈의 값은 %d 입니다. \n", a*b);
	}
	else if (select == 4)
	{
		printf ("나머지의 값은 %d 입니다. \n", a%b);
	}
	else
	{
		printf ("1~4까지의 정확한 값을 입력하세요. \n");
	}


}

