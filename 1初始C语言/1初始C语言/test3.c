#include<stdio.h>	
#include<string.h>

//int f(char* s)
//{
//	char* p = s;  //����һ��ָ��
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


//����
#define MAX 1000;
//ͨ������
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

//��Ķ���
#define MAX(X,Y)(X>Y?X:Y)


//ָ��  ��һ�ֱ�����������ŵ�ַ�� - ָ�����
//ע��Ⱥ����ߵ�����Ҫһ��  һ��ָ��Ҳ��4���ֽڣ�32λ��64λ8���ֽ�

//��ַ ��β�����ַ ���ڵ�������32λ����64λ��
//���������Ƕ����ƵĲ������32λ���Ծ��Ǵ�000...0��111...1����������
//�������е�ÿһ��Ԫ�ؾʹ�����һ����ַ һ����2^32����ַ��32λ�� 
//һ����ַ��һ���ֽڵĴ�С


//�ṹ��
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

	//��
	int max2 = MAX(a, b);
	printf("max = %d\n", max2);

	int* p = &a;//&ȡַ��
	*p = 20;//*������  ����ͨ��ָ�����ı䱻ָ�����ݵĴ�С
	printf("%p\n", p);//%p�ǵ�ַ

	//���ýṹ������-����һ�������ͽṹ�����
	struct person p1 = { 55,"agenld" };
	printf("����:%s\n", p1.name);
	printf("����:%d\n", p1.age);
	p1.age = 15;//ͨ��������ʽ�޸ļ۸�
	//����name��c�����������飬����Ҫʹ��strcpy�������޸�
	//����Ϊstrcpy�ǿ⺯�������һ��Ҫ����ͷ�ļ�
	strcpy(p1.name, "C++");
	printf("����:%s\n", p1.name);

	//ͨ��ָ�����ʽ���  ������ʽ
	struct person* pb = &p1;
	printf("����:%s\n", pb->name);
	printf("����:%d\n",(*pb).age);



	return 0;
}