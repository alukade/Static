#include<stdio.h>

void func(void);

void func(void)
{
	static int count = 0;//����static��ÿһ�ν�������ڴ�ռ䲻�ᱻ�ͷš�ȥ��static��countһֱΪ0
	/*staticʹ�þֲ��������о�̬�洢�ڣ����������������ȫ�ֱ���һ����֪�����������Ż��ͷ�*/
	/*�������count�����Ǿֲ�����*/
	printf("count =%d\n", count);

	count++;
}

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		func();
	}
	
	return 0;
}

