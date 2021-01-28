#include <stdio.h>

main()
{
	int length;
	printf ("직사각형의 한 변의 길이(cm)를 입력해주십시오.");
	scanf("%d",&length);
	int height;
	printf ("직사각형의 다른 변의 길이(cm)를 입력해주십시오.");
	scanf("%d",&height) ;
	{
		printf ("직사각형의 넓이는 %dcm 입니다.", length*height);
	}
}
