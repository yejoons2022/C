#include <stdio.h>

main()
{
	int a;
	printf ("이번 학기 성적을 당장 말해!");
	scanf("%d", a);
	
	{
		if(a>90)
		printf("잘했어! 이번 학기 성적은 A네!");
		
		else if(a>80 && a<90)
		printf("B..그저 그렇네");
		
		else if(a>70 && a<80)
		printf("C라니, 말이나 돼는 소리야?");
		
		else if(a>60 && a<90)
		printf("D.. 너는 그냥 공부를 접는게 좋겠다");
		
		else
		printf("F야. 무슨 말이 필요해 ㅋㅋ");
	}
}

