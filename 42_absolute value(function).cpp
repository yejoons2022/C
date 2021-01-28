#include <stdio.h>
#include <math.h>

main()
{
	int result1, n;
	double result2;
	
	scanf ("%d", &n);
	
	result1 = abs(n);
	result2 = sin(n);
	
	printf ("Absolute value of the number is %d, and sin value of the number is %lf. ", result1, result2);
}
