#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int是整型
//main前面的int表示main函数调用返回一个整型值

int num2 = 10;//全局变量

int main1()//主函数-程序的入口-main函数有且仅有一个
{

	//int num1 = 20;//局部变量 定义在代码块{}内部的变量
	////当全局变量和局部变量同时存在且名称相同时，优先采用局部变量，建议不要这样使用
	////容易产生bug

	////在这里完成任务
	////在屏幕上输出hehe
	////函数-print function -printf - 打印函数
	////c语言提供的函数叫做库函数
	////使用库函数要包含stdio.h的头文件
	//printf("hehe\n");

	////char-字符类型
	////%d - 打印整型
	////%c - 打印字符
	////%f - 打印浮点数字 - 打印小数
	////%p - 以地址的形式打印
	////%x - 打印16进制
	////%s - 打印字符串
	//char ch = 'a';
	//printf("%c\n",ch);//%c--打印字符格式的数据

	////int-整形
	//int age = 20;
	//printf("%d\n",age);//%d--打印整型十进制数据 十进制不是十位。。

	////short int -短整型
	////float - 浮点型
	//float f = 122.0;//小数点后面显示6位有效数字
	//printf("%f\n",f);

	//short s = 20;
	//printf("%d\n", s);

	////sizeof用来计算所占内存空间
	////字节 是计算机中的单位
	////bit - 比特位
	////byte - 字节   1字节=8比特位
	////kb 	//mb	//gb	//pb


	//计算两个数的和
	//C语言语法规定，定义要放在当前代码块的最前面,但是在vs里面也可以不这样
	//vs认为scanf是不安全的，要改成scanf_s
	int num3 = 0;
	int num4 = 0;
	//输入数据-使用输入函数-scanf
	scanf_s("%d%d", &num3, &num4);//&取址符
	int sum = num3 + num4;
	printf("sum = %d\n", sum);//前面的sum = 的意思是在输出的时候会输出一个sum = 


	//局部变量的作用域，就是它在哪可以用，哪里就是他的作用域，例如：
	{
		int dj = 10l;
	}
	//printf("dj = %d\n", dj);  这一行就是错的，因为dj跟输出不在同一个作用域下
	//全局变量的作用域是整个工程，哪里都能用
	//在sum源文件中定义一个全局变量garbeer，在经过声明以后依然可以使用
	//声明 extern
	extern int garbeer;
	printf("garbeer = %d\n", garbeer);

	return 0;
}