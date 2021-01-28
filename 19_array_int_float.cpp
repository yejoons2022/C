#include <stdio.h>

main()
{
	int floor[8] = {101,102,103,104,201,202,203,204};
	double dot[4] = {3.1415926535897932384, 2.567, 3.55, 9.6};
	
	//printf ("floor 배열의 %d번째에 있는 값은 %d 입니다. \n", 5, floor[5]);
	//printf ("dot 배열의 %d번째에 있는 값은 %lf 입니다. \n", 2, dot[2]);
	
	for (int i = 0; i <= 7; i++)
	{
		printf ("floor 배열의 값은 %d 입니다. \n", floor[i]);
		
		for (int j = 0; j <= 3; j++)
		{
		printf ("dot 배열의 값은 %.15lf 입니다. \n", dot[j]);
		}
	
	}
	
	
}
