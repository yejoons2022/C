#include <stdio.h>

main()
{
	double a;
	
	for (a = 0; a < 0.99; a = a + 0.01)
	{
		printf ("���� %f �Դϴ�. \n", a);
	}
}
