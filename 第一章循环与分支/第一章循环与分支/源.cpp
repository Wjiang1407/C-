#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//��֧����ѭ������ʹ��
//��C�����е�if�ж����Ϊһ�����ʱ��û��{}�ģ����������Ҫ�ô�����������


void jishu()
{
	//1.�ж�һ�����Ƿ�Ϊ����
	//2.���1~100�����������
	for (int i = 0; i < 100; i++)
	{
		static int j = 0;
		if (j % 2 == 0)
		{

		}
		else
		{
			printf("%d\n", j);//%d��������ͣ��������ⲻ��C++�Ǻ��ˣ�������
		}
		j++;
	}
}




int main()
{
	//int age = 10;
	//if (age < 18)
	//{
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}
	////���Ҫ���������ж�һ��Ҫʹ���һ򣬲���ֱ��ʹ��
	//else if (age >= 19 && age < 60)
	//	printf("׳��\n");
	//else if (age >= 60 && age < 100)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");


	//int a = 10;
	//int b = 20;
	//if (a == 1)
	//	if (b == 20)
	//		printf("hehe\n");
	//	else
	//		printf("haha\n");
	////if��else��ƥ������Ǿͽ�ԭ��������ifʲô�������
	////���if����õ�ʱ������C++����if��ֱ������

	//int num = 4;
	//if (num = 5)
	//{
	//	printf("hehe\n");
	//}
	//���������Ȼ������������ԭ�����ж������е��ڱ��ĳ��˸�ֵ

	//jishu();

	////switch break��� switch�Ĳ����б���������ͣ��ַ���
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
	////case���治��һ��Ҫ��break�ģ����ֱ�̷�ʽ��ʹ��1~4����ʾ������
	//int chai = 0;
	//scanf_s("%d\n", chai);
	//switch (chai)
	//{
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//case 6:
	//	printf("��Ϣ��\n");
	//	break;
	//default:
	//	printf("�����˸�ʲô�İ�\n");
	//	break;
	//}

	////��ϰ��
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

	////whileѭ��
	//int g = 0;
	//while (g <= 10)
	//{	
	//	g++;//���g++һ��Ҫ�ŵ��ж����档����������ѭ��
	//	if (g == 5)//�����ж��������㣬�����breakֱ���Ƴ�ѭ����
	//	//�����continue������������������ѭ��ִ���´�ѭ��
	//	{
	//		break;
	//	}
	//	printf("hehe\n");

	//}

	////������������
	//int ch = 0;
	////getchar��ȡ�ַ�  putchar����ַ�  EOF == end of file �ļ�������־ �������ȴ���
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}


	////���밸��  ���永����ʵ����;
	//int ret = 0;
	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf_s("%s", password);//�������룬�������password��
	////����������һ�������뻺�������������ڴ洢�����ź�
	////�������������ԭ�����������������ûس����ܽ�����һ��
	////�����벻�����س���ʣ�µĻس����ڻ�������ͨ��ASCII��ת����10ֱ��������
	////ret��һ�е��У�Ҫ���ֻ��Ҫ��\n���ߣ��ټ�һ��getchar����
	////�������123 avb����������Ȼ��������Ҫʹ��ѭ��
	//int ch = 0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;//����䣬����Ҫִ���κβ���
	//}
	//printf("��ȷ�� Y/N:>");
	//ret = getchar();
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}

	////�������ֻ���ASCII0~9֮�������
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}

	////forѭ��
	////��������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����  ���罫if�е�i == 5
	////�ĳ� i= 5���ͻ�����ѭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 5)
	//	{
	//		continue;//������û��5
	//	}
	//}

	////forѭ���ĳ�ʼ�����������ж϶�����ʡ��
	////����forѭ�����жϲ��������ʡ�ԣ����жϺ�Ϊ��
	////for (;;)
	////{
	////	printf("hehe\n");
	////}

	////�������������ֻ�����ʮ�Σ�ԭ����û�г�ʼ��������jһֱΪ10
	//int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}


	////������  ���forѭ��ѭ������
	//for (int i = 0, int l = 0; l = 0; i++, l++)
	//{
	//	l++;
	//}
	////�����ж�����l=0����0�Ǽ٣����������������Ͳ�����

	////do whileѭ�� ������do�Ĵ�����У�whileֻ��;
	//do
	//{
	//	printf("%d\n", i);
	//	i++;
	//} while (i < 10);
		
	////n�Ľ׳� for i
	////Ƕ�ױ�ʾ1��+2��+...10��=��
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

//��һ�����������в��Ҿ����ĳ������n����дint binsearch��int x��int v[]��int n��;
//���ܣ���v[0]...v[n-1]�������в���x������������� int arr[0] = {1,2,3,4,5,6,7}
//���ֱ�ӱ�����������Ҫ����n�Σ������ַ�ֻ��Ҫlog2n�Σ�����������ö��ַ�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 7;
	//int left = 0;//��ʾ�����±�
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int right = sz - 1;//��ʾ���±�


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
	//		printf("�ҵ���k: %d\n", mid);
	//		break;
	//	}
	//}



	////�ݼ����  Ҫʱ�̽���C���Ե��е��ַ������һλ����һ��\0����β��
	//char arr1[] = "helloworld!!";
	//char arr2[] = "++++++++++++";
	//int left = 0;
	////int right = (sizeof(arr1) / sizeof(arr[0])) - 2;//��2��ԭ���������ע��
	////C��������strlen����ؼ��ʣ���������Կ��ٵ�����ַ����ĳ���
	//int right = strlen(arr1) - 1;//ע�����ͷ�ļ�

	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	//��Ϣһ�� Ҫʹ���������һ��Ҫ����#include<windows.h>��ͷ�ļ�
	//	Sleep(1000);
	//	system("cls");
	//	left++;
	//	right--;
	//}



//	//ģ���û���������
//	//�û��������������˳����� �û�����Ϊ123456
//
//	int password[20] = { 0 };
//
//	int cishu = 1;
//	while(cishu<=3)
//	{	
//		printf("����������:>");	
//		scanf_s("%d", password);
//		if (*password == 123456)
////�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯�� strcmp
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		cishu++;
//	}
//	if (cishu == 3)
//	{
//		printf("�˺��Ѿ�����\n");
//	}


	//��������������
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	//scanf�ĵ�����Ҫָ����Ϊ������������int
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


	system("pause");//c����ʹ��system�ð���#include<stdlib.h>��ͷ�ļ�


	return 0;
}