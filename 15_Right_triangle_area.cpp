#include <stdio.h>

main()
{
	int w;
	printf("직각삼각형의 밑변의 길이(cm)를 입력해주십시오.");
	scanf("%d",&w);
	printf("직각삼각형의 높이의 길이(cm)를 입력해주십시오.");
	int h;
	scanf("%d",&h);
	
	float result = 0.5*(w*h);
	
	{
		printf("직각삼각형의 넓이는 %fcm입니다.", result);
	}
	
}
