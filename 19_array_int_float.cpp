#include <stdio.h>

main()
{
	int floor[8] = {101,102,103,104,201,202,203,204};
	double dot[4] = {3.1415926535897932384, 2.567, 3.55, 9.6};
	
	//printf ("floor �迭�� %d��°�� �ִ� ���� %d �Դϴ�. \n", 5, floor[5]);
	//printf ("dot �迭�� %d��°�� �ִ� ���� %lf �Դϴ�. \n", 2, dot[2]);
	
	for (int i = 0; i <= 7; i++)
	{
		printf ("floor �迭�� ���� %d �Դϴ�. \n", floor[i]);
		
		for (int j = 0; j <= 3; j++)
		{
		printf ("dot �迭�� ���� %.15lf �Դϴ�. \n", dot[j]);
		}
	
	}
	
	
}
