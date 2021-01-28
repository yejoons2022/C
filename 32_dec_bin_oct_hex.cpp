#include <stdio.h>

main()
{
	//int a = 15;     //00000000 00000000 00000000 00001111
	//int b = 10;     //00000000 00000000 00000000 00001010
	int a = 0x67;     //0x -> 16진수를 의미 
	int b = 0x34;
	int c;
	
	printf ("%d \n", a+b);
	printf ("%o \n", a+b);
	printf ("%x \n", a+b);
	
	printf ("%d \n", a > 0 && b < 0);
	printf ("%d \n", a > 0 || b < 0);
	
	printf ("%d \n", a & b);	 //2진수로 변환하여 참/거짓 계산
	printf ("%d \n", a | b);
	printf ("%d \n", a ^ b);     //^는 exclusive or: 둘 중 하나만 1(참)이어야 참으로 성립 
	
	scanf ("%d", &c);     //&앞에 아무것도 없을때는 주소연산자로 활용! (RAM 작동원리) 
	
	
	
	
	
	
	
	
	
	
	
	
	/*int a = 378;
	
	printf ("%d \n", a);     //dec
	printf ("%o \n", a);     //oct
	printf ("%x \n", a);     //hex 
	//printf ("%? \n", a);   //bin impossible*/
	
	
}
