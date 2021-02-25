#include<stdio.h>

void func(void);

void func(void)
{
	static int count = 0;//用了static后，每一次结束后的内存空间不会被释放。去掉static后，count一直为0
	/*static使得局部变量具有静态存储期，因此他的生存期与全局变量一样，知道程序结束后才会释放*/
	/*但这里的count依旧是局部变量*/
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

