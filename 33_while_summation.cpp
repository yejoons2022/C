#include <stdio.h>
//���α׷� ����ڷκ��� ����ؼ� ������ �Է¹޽��ϴ�.
//�׸��� �� ���� ��� ���س����ϴ�. 
//�׷��� ���α׷� ����ڰ� 0���� �Է��Ͽ������� ���α׷��� �����ϰ�
//�� ���� ���� ����ϴ� ���α׷��� �ۼ��� ���ô�. 

main()
{
	int total = 0;
	int num = 1;
	
	while (num != 0)
	{
		printf ("insert number: \n");
		scanf ("%d", &num);
		total += num;     //total = total + num;
	}
	
	printf ("sum of the numbers= %d", total);
}
