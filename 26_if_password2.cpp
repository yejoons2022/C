#include <stdio.h>

main()
{
	char pw[] = {'1', '2', '3', '4'};
	char cpw[5];
	
	printf ("type password \n");
	
	for (int a = 0; a < 4; a++)
	{
		printf ("%d번째 값 입력 \n", a+1);
		scanf ("%s", &cpw[a]);
	}
	
	
	if (pw[0] == cpw[0] && pw[1] == cpw[1] && pw[2] == cpw[2] && pw[3] == cpw[3])
	{
		printf ("door open \n");
	}
	
	else if (pw[0] != cpw[0] && pw[1] == cpw[1] && pw[2] == cpw[2] && pw[3] == cpw[3])
	{
		printf ("incorrect %d \n", pw[0]);
	}
	
	else if (pw[0] == cpw[0] && pw[1] != cpw[1] && pw[2] == cpw[2] && pw[3] == cpw[3])
	{
		printf ("incorrect %d \n", pw[1]);
	}
	
	else if (pw[0] == cpw[0] && pw[1] == cpw[1] && pw[2] != cpw[2] && pw[3] == cpw[3])
	{
		printf ("incorrect %d \n", pw[2]);
	}
	
	else if (pw[0] == cpw[0] && pw[1] == cpw[1] && pw[2] == cpw[2] && pw[3] != cpw[3])
	{
		printf ("incorrect %d \n", pw[3]);
	}
	
	else
	{
		printf ("incorrect");
	}
	
}
