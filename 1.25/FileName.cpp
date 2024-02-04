#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//头文件.h和源文件.c


////2.写一个程序
//
//int main()//main主函数，程序的入口，有且只有一个main函数
//{
//	printf("hello world!zhongen");//调用printf函数
//	//printf，print function
//	//库函数是C语言本身提供给我们的函数
//    return 0;//返回0
//}
//
//int main()//int，整型，表示main函数调用后返回一个整型值
//{
//    //void函数，过时了
//}




//
////3.数据类型
//int main() 
//{
//	int age = 18;//申请内存
//	printf("%d", age);//打印十进制整型数据
//
//
//	char ch = 'Q';
//	printf("%c", ch);//打印字符
//
//	ch= 'W';
//	printf("%c", ch);
//
//	double lmx = 3.1;
//	printf("%f", lmx);
//
//	//%f打印浮点数
//	//%lf
//	//%p打印地址
//	//%x打印16进制
//
//
//	return 0;
//}



////4.内存
//int main() {
//
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//int a = 22;
//
////5.局部变量
//int main() {
//
//	{
//		int a = 10;
//	}
//	int a = 3;
//	printf("%d", a);
//	return 0;
//}


//
////6.变量的应用
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//&取地址符号
//	int c = 0;
//	c=a + b;
//	printf("%d", c);
//	return 0;
//}

////7.常量
//int main() {
//	//const int num = 10;//num是变量，但是有常属性
//	int num = 10; 
//	printf("%d", num);
//	num = 11;
//	printf("%d", num);
//}




////8.字符串
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//
//	printf("%s\n", arr1);//%s打印字符串
//	printf("%s\n", arr2);
//
//}

