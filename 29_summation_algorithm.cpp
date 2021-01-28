#include <stdio.h>

main()
{
	int a, b, c;
	int sum = 0;
	
	scanf("%d", &a);
	
	for(int i = 0;i < a; i++)
	{
		scanf("%d %d", &b, &c);
		sum = sum + (c%b);
	}
	
	printf ("%d", sum);
	
	
}
