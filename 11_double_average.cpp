#include <stdio.h>

main()
{
	double total=0.0;
	double input=0.0;
	int num=0;
	
	for( ; input>=0.0 ; )
	{
		total= total+input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}
	
	printf("���: %f \n", total/(num-1));
	
}
