#include <stdio.h>

main()
{
	//int a = 15;     //00000000 00000000 00000000 00001111
	//int b = 10;     //00000000 00000000 00000000 00001010
	int a = 0x67;     //0x -> 16������ �ǹ� 
	int b = 0x34;
	int c;
	
	printf ("%d \n", a+b);
	printf ("%o \n", a+b);
	printf ("%x \n", a+b);
	
	printf ("%d \n", a > 0 && b < 0);
	printf ("%d \n", a > 0 || b < 0);
	
	printf ("%d \n", a & b);	 //2������ ��ȯ�Ͽ� ��/���� ���
	printf ("%d \n", a | b);
	printf ("%d \n", a ^ b);     //^�� exclusive or: �� �� �ϳ��� 1(��)�̾�� ������ ���� 
	
	scanf ("%d", &c);     //&�տ� �ƹ��͵� �������� �ּҿ����ڷ� Ȱ��! (RAM �۵�����) 
	
	
	
	
	
	
	
	
	
	
	
	
	/*int a = 378;
	
	printf ("%d \n", a);     //dec
	printf ("%o \n", a);     //oct
	printf ("%x \n", a);     //hex 
	//printf ("%? \n", a);   //bin impossible*/
	
	
}
