#include <stdio.h>

main()
{
		int num = 0;
		int sum = 0;
		
		while(1)
		{
			sum = sum + num;
			
			if (num >= 100)
			{
				break;
			}
			
			printf ("num is %d, and %d is the sum. \n", sum, sum);
			num++;
		}
}
