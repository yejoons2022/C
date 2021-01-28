//키가 187.5cm 이상이고 몸무게가 80.0kg 미만이면 ok를 출력하고,
//나머지 경우 cancel을 출력하는 프로그램을 작성합니다. 

#include <stdio.h>

main()
{
	double height, weight;
	printf ("키(cm)와 몸무게(kg)를 각각 표기해주십시오. \n");
	scanf ("%lf %lf", &height, &weight);
	
	if (height >= 187.5 && weight < 80.0)
	{
		printf ("ok");
	}
	
	else
	{
		printf ("cancel");
	}
}
