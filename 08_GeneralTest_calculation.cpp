#include <stdio.h>

main()
{
	char sel;
	int num1 = 100;
	int num2 = 50;
	
	printf ("¿¬»êÀÚ¸¦ ¼±ÅÃÇÏ¼¼¿ä. \n");
	printf ("add.µ¡¼À sub.–E¼À mul.°ö¼À div.³ª´°¼À \n");
	scanf ("%c", &sel);
	
	if(sel == 'add')
	{
		printf("%d", num1+num2);
	}
	else if(sel == 'sub')
	{
		printf("%d", num1-num2);
	}
	else if(sel == 'mul')
	{
		printf("%d", num1*num2);
	}
	else if(sel == 'div')
	{
		printf("%d", num1/num2);
	}
	else
	{
		printf("Àß¸øµÈ °ªÀÔ´Ï´Ù.");
	}
} 
