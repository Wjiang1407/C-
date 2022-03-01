#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//这样定义常量不需要；
#define MAX 10

//枚举常量 关键字 ： enum  一一列举  距离：性别：男，女，保密
//常量都是不可以修改的
enum SEX
{
	MALE,FEMALE,SECRET
};

//函数
int add(int a, int b)
{
	int c = a + b;
	return c;
}

int main2()
{
	//创建一个实际的人，定义他的性别
	enum SEX s = MALE;

	//创建的性别是有编号的
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2


	int num1 = 0;
	int num2 = 0;
	//之所以用scanf_s，是因为scanf会出错
	//scanf是C语言提供的，scanf_s不是标准C语言提供，是VS编译器提供的
	//这样使用不能使代码跨平台
	//如果想在VS里正常使用scanf，就要在第一行加上#define _CRT_SECURE_NO_WARNINGS 1
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum = %d\n", sum);

	//字面常量 直观写出来的值就是字面常量
	3;

	//const - 常属性
	const int num = 4;
	//int arr[num] = { 0 };//虽然是const修饰的变量，但是仍然不可用
	//但是arr[MAX]是可行的
	int arr[MAX] = { 0 };

	//字符串
	//可以将一个字符串放到一个字符数组中
	char arr1[] = "abd";
	//"abc" -- 'a' 'b' 'c'   \0是字符串的结束标志
	char arr2[] = { 'a','b','c',0 };//0跟\0效果一样
	printf("%s\n", arr1);
	printf("%d\n", strlen(arr2));
	//通过strlen来计算字符串长度 使用之前要加上一个#include<string.h>的头文件

	//转义字符与C++中相同，用处不是很大

	/*这种注释风格不能嵌套*/

	//选择语句
	int input = 0;
	printf("选1还是0？\n");
	scanf_s("%d", &input);
	if (input == 1)
		printf("1\n");
	else
		printf("0\n");

	//while语句
	int line = 0;
	while (line < 20)
	{
		printf("啊\n");
		line++;
	}
	printf("wosile\n");

	//数组
	int arr10[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//下标从零开始

	//2进制 位操作
	//& 按位与
	//| 按位或
	//^ 按位异或：对应的二进制相同，则为0.对应的二进制不同，则位1

	//单目运算符 例如 ！取反 - + &取址符 sizeof ~对一个二进制按位取反 -- ++ 
	//*解引用 （类型）强制类型转换
	//原码  例1000
	//反码  原码取反得到反码 0111
	//补码  反码+1得到补码   1111
	//真 - 非0
	//假 - 0
	//逻辑或 &&
	//逻辑与 ||
	//双目运算符 例如 = 赋值
	//三目运算符 例如 表达式1？表达式2：表达式3

	//auto 本来在局部变量前都要有一个auto，但是都省略掉了

	//由于cpu速度越来越快，内存处理的数据速度跟不上，就出现了寄存器
	//register  例如  register int a = 10;
	//建议把a放在寄存器中，因为寄存器有限，但是在使用中，编译器会自动选择那个数据放入寄存器

	//signed int  ==  int  signed（有符号的

	//typedef 类型定义 类型重定义
	typedef unsigned int u_int ;
	unsigned int num40 = 20;
	u_int num50 = 20;

	//extern  声明
	//extern int g_val;


	//1.static修饰局部变量
	//局部变量的声明周期变长 在循环中插入一个函数，在函数中定义一个static修饰的
	//局部变量，该函数会记住每次改变的变量值，让生命周期延长
	//2.static修饰全局变量
	//改变变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
	//3.static修饰函数
	//static修饰函数改变了函数的链接属性，从外部连接属性变成了内部连接属性 
	//就是说只能在同一个源文件中使用



	return 0;
}