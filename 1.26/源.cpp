#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<string.h>

//int main() 
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	//char arr2[]={'a','b','c',0};
//	//char arr2[]={'a','b','c','0'};
//	//ASCII��ֵ
//	//\0  0 
//	//A  65
//	//a  97
//
//	//��ӡ�ַ���
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//    //��һ���ַ����ĳ���
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//�º���������strlen=string length
//
//
//	return 0;
//}




////ת���ַ�
//int main()
//{
//	printf("f:\test\51\test.c\n");
//	//51��Ϊ8������������Ӧ��10�������ֶ�Ӧ��ASCII��ֵ
//  //8����51��Ӧ��ʮ����������41��41��ASCII����ж�Ӧ��
//	printf("ab\ncd");
//	return 0;
//}

//int main()
//{
	//printf("%c\n", '\'');
	//printf("%s\n", "abc");
	//printf("%s\n", "a");
	//printf("%s\n", "\"");
	//printf("%s\n", "'");
	//printf("c:\\test\\test.c");
	//printf("\a");

	////printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ

// 	printf("%d",strlen("f:\test\51\test.c"));
//	//ת���ַ�����Ϊ1
//
//	return 0;
//}


//int main()
//{
//	printf("%c\n", '\130');
//	printf("%c\n", '\101');
//	printf("%c\n", '\x30');
//	printf("%d\n", strlen("abc"));
//	
//	printf("%d\n", strlen("c:\test\328\test.c"));
//
//	return 0;
//}




//ѡ�����ǳ�֮if else

//  //����ѡ��
//int main()
//{
//	int input = 0;//��ʼ��
//	printf("����\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��Ϊ��B\n");
//	}
//	else
//	{ 
//		printf("������\n");
//	}
//	return 0;
//}

//  //����ѡ��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a = 0)
//	{
//		printf("�����ֵΪ0");
//	}
//	else if(a=1)
//	{
//		printf("�����ֵΪ1");
//	}
//	else
//	{
//		printf("ɶҲ����");
//	}
//
//	return 0;
//}



////ѭ�����
//int main()
//{
//	printf("�ڴ���Ǩ\n");
//	int a = 0;//a�����Ƿ��Ǩ
//	int b = 0;//b������ֵ
//
//	scanf("%d", &a);
//
//	while (a == 0&&b < 10)
//	{
//		printf("Ŭ���ô��룬�����1\n");
//		b = b + 1;
//		scanf("%d", &a);
//		printf("�ڴ���Ǩ\n");
//
//	}
//
//	if (a ==1)
//	{
//		printf("��Ϊ������\n");
//	}
//	else if (b ==10)
//	{
//		printf("��óƺţ���������\n");
//	}
//
//	printf("�Ҹ����������\n");
//
//	return 0;
//}






////����
//int Add(int a,int b)
//{
//	int z = 0;
//	z = a + b;
//
//	return z;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	scanf("%d%d", &x, &y);
//	printf("%d", Add(x, y));
//
//	return 0;
//}



////����
////���飬һ����ͬ���͵�Ԫ�صļ���
////���������±������ʵ�
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	char ch[5] = {'a', 'b', 'c'};//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//
//	printf("%d\n", a);
//
//	return 0;
//}




//������
// int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//  a = a - 3;
//	a -= 3;
// 
//	int a = 9 / 2;
//	float a = 9 / 2.0;
//	int a = 9 % 2;//% - ȡģ���ࣩ
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	//0 ��ʾ�٣���0������
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//���aΪ�棬����
//	}
//	if (!a)
//	{
//		//���aΪ�٣�����
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}


//int main()
//{
//	//sizeof��һ��������
//	//���Ǻ���
//	//�������ͻ��߱����Ĵ�С��
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	//10*4 = 40 
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}



//  //������~
//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//
//  //~ ��λȡ��,��������λȡ��
//  //a��4���ֽڣ�32��bitλ��00000000000000000000000000000000������ԭ�벹�뷴����ͬ
//  //11111111111111111111111111111111����һλ��ʾ�������������ڴ��д洢ʱ���洢���Ƕ����ƵĲ���
//  //ԭ�� ���� ����
//  //�����һΪ����
//  //~a�ķ���Ϊ11111111111111111111111111111110����ԭ��Ϊ10000000000000000000000000000001
//  //~aΪ-1
// 	return 0;
//}


//++a��a++


//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	int c = a || b;
//
//	printf("%d\n", c);
//
//	/*int a = 3;
//	int b = 0;
//
//	int c = a && b;
//	
//	printf("%d\n", c);*/
//
//	/*if (a && b)
//	{
//
//	}*/
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}


//  //if������һ�ֱ����ʽ
//  //�������������ֳ���Ŀ������   exp1��exp2��exp3


// //���Ų�����
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a=5       c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//
//	printf("%d\n", d);
//	return 0;
//}

//�±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}


//�������ò�����
//���ú�����ʱ�򣬺�������ߵģ������Ǻ������ò�����





//C�����ṩ�Ĺؼ���
//1. C�����ṩ�ģ������Լ������ؼ���
//2. �����������ǹؼ���
// auto
//int main()
//{
//	//int char;
//	{
//		int a = 10;//�Զ��������Զ����ٵ� - �Զ�����
//		//auto ʡ�Ե��ˣ��ֲ�����֮ǰ����һ��auto
//		// 
//		//auto �µ�C�����﷨��Ҳ�������÷� - ��ʱ������
//	}
//
//	return 0;
//}


//  //register
//int main()
//{
//	//
//	//����/Ƶ����ʹ�õ����ݣ�����ڼĴ����У�����Ч��
//	//
//	register int num = 100;//����num��ֵ����ڼĴ�����
//
//	return 0;
//}


////typedef-�����ض���
//int main()
//{
//	typedef unsigned int u_int;
//
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//
//}

//static  - ��̬��
//1. static���ξֲ�����
//2. static����ȫ�ֱ���
//3. static���κ���

//void test()
//{
//	int a = 1;
//	//static int a = 1;
//  //a��һ����̬�ֲ�����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//  //static���ξֲ�������ʹ���������ڱ䳤 

//extern �����ⲿ���ŵ�
//extern int g_val;
//  //Դ1.cpp��
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//  //static����ȫ�ֱ������ı��˱����������򣬾�̬ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ���������

//��������
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//  //static���κ������ı��˺�������������
//  //�ⲿ��������->�ڲ���������



//define ��һ��Ԥ����ָ��
//1.define�����ʶ������
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2. define �����-������
//  //��һ
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}

//  //����
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	printf("%d", MAX(x, y));
//	return 0;
//}


////ָ��
////Ҫ��ָ�룬�ȶ��ڴ�
////��ַ->�ռ�
//int main() {
//	int a = 11;//���ڴ�����4���ֽ�
//	//&aȡ��ַ
//	printf("%p", &a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
////��һ�ֱ�����������ŵ�ַ��---ָ�����
// 
//	*pa = 20;//* �����ò�������*pa����ͨ��pa��ߵĵ�ַ���ҵ�a
//
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//�ṹ��


//����һ��ѧ��
struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ�����������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}


//��ҵ��дһ���������������������ֵ