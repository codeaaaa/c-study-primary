
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//未声明的标识符
//声明extern - 
extern int g_val;

int a = 2;//全局变量
//局部变量和全局变量的名字建议不要相同，容易误会，产生BUG
//当局部变量和全局变量的名字一样时，局部变量优先
//局部变量只作用与他的作用域,
//进入作用域生命周期开始，出作用域生命周期结束
int main()
{
	int a = 10;//局部变量
	//计算两数和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//语言语法规定，变量要定义在当前代码块的最前面
	//输入函数 -- scanf
	scanf("%d%d", &num1, &num2);//&取地址符号
	 sum = num1 + num2;
	printf("sum = %d\n", sum);
	printf("%d\n", a);
	printf("g_val=%d\n", g_val);
	return 0;
}