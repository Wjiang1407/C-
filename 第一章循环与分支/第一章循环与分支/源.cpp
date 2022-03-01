#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//分支语句和循环语句的使用
//在C语言中的if判断输出为一条语句时是没有{}的，多条语句是要用代码框框起来的


void jishu()
{
	//1.判断一个数是否为奇数
	//2.输出1~100间的所有奇数
	for (int i = 0; i < 100; i++)
	{
		static int j = 0;
		if (j % 2 == 0)
		{

		}
		else
		{
			printf("%d\n", j);//%d是输出整型！！！！这不是C++记好了！！！！
		}
		j++;
	}
}




int main()
{
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}
	////如果要进行两次判断一定要使用且或，不能直接使用
	//else if (age >= 19 && age < 60)
	//	printf("壮年\n");
	//else if (age >= 60 && age < 100)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");


	//int a = 10;
	//int b = 20;
	//if (a == 1)
	//	if (b == 20)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	////if和else的匹配规则是就近原则，因此这个if什么都不输出
	////因此if语句用的时候还是用C++风格的if，直观明了

	//int num = 4;
	//if (num = 5)
	//{
	//	printf("hehe\n");
	//}
	//这个代码仍然可以跑起来，原因在判断条件中等于被改成了赋值

	//jishu();

	////switch break语句 switch的参数列表可以是整型，字符型
	//int chia = 0;
	//scanf_s("%d\n", chia);
	//switch (chia)
	//{
	//case 1:
	//	printf("1\n");
	//	break;
	//case 2:
	//	printf("2\n");
	//	break;
	//case 3:
	//	printf("3\n");
	//	break;
	//}
	////case后面不是一定要跟break的，这种编程方式会使输1~4都显示工作日
	//int chai = 0;
	//scanf_s("%d\n", chai);
	//switch (chai)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//	printf("工作日\n");
	//	break;
	//case 5:
	//case 6:
	//	printf("休息日\n");
	//	break;
	//default:
	//	printf("你输了个什么寄吧\n");
	//	break;
	//}

	////练习题
	//int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1: m++;
	//case 2: n++;
	//case 3:
	//	switch (n)
	//	{
	//	case 1:n++;
	//	case 2:m++; n++; break;
	//	}
	//case 4:m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m = %d\n", "n = %d\n", m, n);

	////while循环
	//int g = 0;
	//while (g <= 10)
	//{	
	//	g++;//这个g++一定要放到判断上面。否则会出现死循环
	//	if (g == 5)//这里判断条件满足，如果是break直接推出循环，
	//	//如果是continue，满足条件跳过本次循环执行下次循环
	//	{
	//		break;
	//	}
	//	printf("hehe\n");

	//}

	////分析代码意义
	//int ch = 0;
	////getchar获取字符  putchar输出字符  EOF == end of file 文件结束标志 （）优先处理
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}


	////密码案例  上面案例的实际用途
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf_s("%s", password);//输入密码，并存放在password中
	////编译器存在一个叫输入缓冲区的区域，用于存储输入信号
	////这个案例会出错的原因在输完密码必须得敲回车再能进入下一步
	////而密码不包括回车，剩下的回车留在缓冲区内通过ASCII码转换成10直接作用在
	////ret哪一行当中，要解决只需要将\n读走，再加一个getchar（）
	////如果存在123 avb这种密码仍然会出错，因此要使用循环
	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;//空语句，不需要执行任何操作
	//}
	//printf("请确认 Y/N:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}

	////这个案例只输出ASCII0~9之间的数据
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}

	////for循环
	////不可以在for循环体中修改循环变量，防止for循环失去控制  例如将if中的i == 5
	////改成 i= 5，就会变成死循环
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 5)
	//	{
	//		continue;//输出结果没有5
	//	}
	//}

	////for循环的初始化、调整、判断都可以省略
	////但是for循环的判断部分如果被省略，那判断恒为正
	////for (;;)
	////{
	////	printf("hehe\n");
	////}

	////距离这个例子中只会输出十次，原因是没有初始化，导致j一直为10
	//int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}


	////笔试题  这个for循环循环几次
	//for (int i = 0, int l = 0; l = 0; i++, l++)
	//{
	//	l++;
	//}
	////由于判断条件l=0，而0是假，所以这个程序根本就不运行

	////do while循环 代码在do的代码框中，while只跟;
	//do
	//{
	//	printf("%d\n", i);
	//	i++;
	//} while (i < 10);
		
	////n的阶乘 for i
	////嵌套表示1！+2！+...10！=？
	//int sum = 0;
	//for (int j = 1; j <= 6; j++)
	//{
	//	int ret = 1;
	//	for (int i = 1; i <= j; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d\n", sum);
	//

//在一个有序数组中查找具体的某个数字n。编写int binsearch（int x，int v[]，int n）;
//功能，在v[0]...v[n-1]的数组中查找x，数组是有序的 int arr[0] = {1,2,3,4,5,6,7}
//如果直接遍历，最坏的情况要搜索n次，而二分法只需要log2n次，所以这里采用二分法
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int left = 0;//表示最左下标
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int right = sz - 1;//表示右下标


	//while (left<=right)
	//{	
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid+1;
	//	}
	//	else
	//	{
	//		printf("找到了k: %d\n", mid);
	//		break;
	//	}
	//}



	////递减输出  要时刻谨记C语言当中的字符串最后一位是有一个\0做结尾的
	//char arr1[] = "helloworld!!";
	//char arr2[] = "++++++++++++";
	//int left = 0;
	////int right = (sizeof(arr1) / sizeof(arr[0])) - 2;//减2的原因就是上面注释
	////C语言中有strlen这个关键词，用这个可以快速的求出字符串的长度
	//int right = strlen(arr1) - 1;//注意包含头文件

	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	//休息一秒 要使用这个函数一定要包含#include<windows.h>的头文件
	//	Sleep(1000);
	//	system("cls");
	//	left++;
	//	right--;
	//}



//	//模拟用户输入密码
//	//用户密码输入三次退出程序 用户密码为123456
//
//	int password[20] = { 0 };
//
//	int cishu = 1;
//	while(cishu<=3)
//	{	
//		printf("请输入密码:>");	
//		scanf_s("%d", password);
//		if (*password == 123456)
////等号不能用来比较两个字符串是否相等，应该使用一个库函数 strcmp
//		{
//			printf("输入正确\n");
//			break;
//		}
//		cishu++;
//	}
//	if (cishu == 3)
//	{
//		printf("账号已经冻结\n");
//	}


	//给三个数字排序
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	//scanf的调用需要指针作为参数，而并非int
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d%d%d\n", a, b, c);


	system("pause");//c语言使用system得包含#include<stdlib.h>的头文件


	return 0;
}