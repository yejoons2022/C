#include <stdio.h>
//���α׷� ����ڷκ��� ���� ������ �ϳ� �Է¹��� ����,
//�� ����ŭ 3�� ����� ����ϴ� ���α׷��� �ۼ��� ���ô�.
//���� ��� 5�� �Է��Ͽ��ٸ� 3 6 9 12 15 �� ����ؾ� �մϴ�. 

main()
{
	int num = 0;
	int count = 1;
	printf ("insert number \n");
	scanf ("%d", &num);
	
	while(count <= num)
	{
		printf ("%d  ", count*3);
		count++;
	}
}
