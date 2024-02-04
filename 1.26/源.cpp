#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#include<string.h>

//int main() 
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	//char arr2[]={'a','b','c',0};
//	//char arr2[]={'a','b','c','0'};
//	//ASCII码值
//	//\0  0 
//	//A  65
//	//a  97
//
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//    //求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//新函数出场，strlen=string length
//
//
//	return 0;
//}




////转义字符
//int main()
//{
//	printf("f:\test\51\test.c\n");
//	//51作为8进制数字所对应的10进制数字对应的ASCII码值
//  //8进制51对应的十进制数字是41，41在ASCII码表中对应）
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

	////printf在打印数据的时候，可以指定打印的格式

// 	printf("%d",strlen("f:\test\51\test.c"));
//	//转义字符长度为1
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




//选择语句登场之if else

//  //两种选择
//int main()
//{
//	int input = 0;//初始化
//	printf("卷不卷？\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("成为卷B\n");
//	}
//	else
//	{ 
//		printf("被卷死\n");
//	}
//	return 0;
//}

//  //多种选择
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a = 0)
//	{
//		printf("输入的值为0");
//	}
//	else if(a=1)
//	{
//		printf("输入的值为1");
//	}
//	else
//	{
//		printf("啥也不是");
//	}
//
//	return 0;
//}



////循环语句
//int main()
//{
//	printf("期待拆迁\n");
//	int a = 0;//a代表是否拆迁
//	int b = 0;//b代表经验值
//
//	scanf("%d", &a);
//
//	while (a == 0&&b < 10)
//	{
//		printf("努力敲代码，经验加1\n");
//		b = b + 1;
//		scanf("%d", &a);
//		printf("期待拆迁\n");
//
//	}
//
//	if (a ==1)
//	{
//		printf("成为富二代\n");
//	}
//	else if (b ==10)
//	{
//		printf("获得称号：代码仙人\n");
//	}
//
//	printf("幸福生活比蜜甜\n");
//
//	return 0;
//}






////函数
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



////数组
////数组，一组相同类型的元素的集合
////数组是用下标来访问的
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
//	char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩余的默认为0
//
//	printf("%d\n", a);
//
//	return 0;
//}




//操作符
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
//	int a = 9 % 2;//% - 取模（余）
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}



//int main()
//{
//	//0 表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果a为真，做事
//	}
//	if (!a)
//	{
//		//如果a为假，做事
//	}
//	a = -5;
//	a = -a;
//	a = +a;
//
//	return 0;
//}


//int main()
//{
//	//sizeof是一个操作符
//	//不是函数
//	//计算类型或者变量的大小的
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
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}



//  //操作符~
//int main()
//{
//	int a = 0;
//
//	printf("%d\n", ~a);
//
//  //~ 按位取反,按二进制位取反
//  //a，4个字节，32个bit位，00000000000000000000000000000000，正数原码补码反码相同
//  //11111111111111111111111111111111，第一位表示正负，负数在内存中存储时，存储的是二进制的补码
//  //原码 反码 补码
//  //反码加一为补码
//  //~a的反码为11111111111111111111111111111110，其原码为10000000000000000000000000000001
//  //~a为-1
// 	return 0;
//}


//++a和a++


//int main()
//{
//	//强制类型转换
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


//  //if语句的另一种表达形式
//  //条件操作符，又称三目操作符   exp1？exp2：exp3


// //逗号操作符
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	        //a=5       c=1        b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//
//	printf("%d\n", d);
//	return 0;
//}

//下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);
//
//	return 0;
//}


//函数调用操作符
//调用函数的时候，函数名后边的（）就是函数调用操作符





//C语言提供的关键字
//1. C语言提供的，不能自己创建关键字
//2. 变量名不能是关键字
// auto
//int main()
//{
//	//int char;
//	{
//		int a = 10;//自动创建，自动销毁的 - 自动变量
//		//auto 省略掉了，局部变量之前都有一个auto
//		// 
//		//auto 新的C语言语法中也有其他用法 - 暂时不考虑
//	}
//
//	return 0;
//}


//  //register
//int main()
//{
//	//
//	//大量/频繁被使用的数据，想放在寄存器中，提升效率
//	//
//	register int num = 100;//建议num的值存放在寄存器中
//
//	return 0;
//}


////typedef-类型重定义
//int main()
//{
//	typedef unsigned int u_int;
//
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//
//}

//static  - 静态的
//1. static修饰局部变量
//2. static修饰全局变量
//3. static修饰函数

//void test()
//{
//	int a = 1;
//	//static int a = 1;
//  //a是一个静态局部变量
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
//  //static修饰局部变量，使其生命周期变长 

//extern 声明外部符号的
//extern int g_val;
//  //源1.cpp中
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//  //static修饰全局变量，改变了变量的作用域，静态全局变量只能在自己的源文件内部发挥作用

//声明函数
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
//  //static修饰函数，改变了函数的链接属性
//  //外部链接属性->内部链接属性



//define 是一个预处理指令
//1.define定义标识符常量
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2. define 定义宏-带参数
//  //例一
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//
//	return 0;
//}

//  //例二
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	printf("%d", MAX(x, y));
//	return 0;
//}


////指针
////要懂指针，先懂内存
////地址->空间
//int main() {
//	int a = 11;//向内存申请4个字节
//	//&a取地址
//	printf("%p", &a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
////有一种变量是用来存放地址的---指针变量
// 
//	*pa = 20;//* 解引用操作符，*pa就是通过pa里边的地址，找到a
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

//结构体


//创建一个学生
struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个的书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}


//作业：写一个函数，求两个数的最大值