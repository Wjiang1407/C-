#include<stdio.h>	
#include<string.h>

//int f(char* s)
//{
//	char* p = s;  //创建一个指针
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return(p-s);
//}
//int main()
//{
//	printf("%d\n", f("goodbye"));
//	return 0;
//}


//常量
#define MAX 1000;
//通过函数
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

//宏的定义
#define MAX(X,Y)(X>Y?X:Y)


//指针  有一种变量是用来存放地址的 - 指针变量
//注意等号两边的类型要一致  一个指针也是4个字节（32位）64位8个字节

//地址 如何产生地址 由于电脑是有32位或者64位的
//而电脑又是二进制的产物，所以32位电脑就是从000...0到111...1的数据排列
//而这其中的每一个元素就代表了一个地址 一共有2^32个地址（32位） 
//一个地址是一个字节的大小


//结构体
struct person
{
	int age;
	char name[20];
};

int main()
{
	int a = 10;
	int b = 20;

	int max1 = max(a, b);
	printf("max = %d\n", max1);

	//宏
	int max2 = MAX(a, b);
	printf("max = %d\n", max2);

	int* p = &a;//&取址符
	*p = 20;//*解引用  可以通过指针来改变被指想数据的大小
	printf("%p\n", p);//%p是地址

	//利用结构体类型-创建一个该类型结构体变量
	struct person p1 = { 55,"agenld" };
	printf("人名:%s\n", p1.name);
	printf("年龄:%d\n", p1.age);
	p1.age = 15;//通过这种形式修改价格
	//由于name在c语言中是数组，所以要使用strcpy来进行修改
	//又因为strcpy是库函数，因此一定要包含头文件
	strcpy(p1.name, "C++");
	printf("人名:%s\n", p1.name);

	//通过指针的形式输出  两种形式
	struct person* pb = &p1;
	printf("人名:%s\n", pb->name);
	printf("年龄:%d\n",(*pb).age);



	return 0;
}