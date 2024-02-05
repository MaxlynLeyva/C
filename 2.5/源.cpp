#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int Max(int x, int y) {
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}

//void Swap(int*x,int*y) {
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//}
//
//int main() {
//	int a = 1;
//	int b = 7;
//	Swap(&a,&b);
//	printf("%d%d", a, b);
//	return 0;
//}

//1. 写一个函数可以判断一个数是不是素数。
//2. 写一个函数判断一年是不是闰年。
//3. 写一个函数，实现一个整形有序数组的二分查找。
//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。

//1. 写一个函数可以判断一个数是不是素数。
//int Sushu(int a) {
//	int b = 0;
//	int c = 0;
//	b = a-1;
//	while (b > 1) {
//		if (a % b == 0)
//			c++;
//		b--;
//	}
//	if (c == 0)
//		return 1;
//	else
//		return 0;
//
//}
//
////2. 写一个函数判断一年是不是闰年
//int Runnian(int a) {
//	if (a % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//3. 写一个函数，实现一个整形有序数组的二分查找。
//int search(int arr[], int k,int sz) {
//	int left = 0;
//	int right = 0;
//	right=sz - 1;
//
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid;
//		else  if (arr[mid] < k)
//			left = mid;
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//} 

//int main() {
//	int arr[]= { 1,2,3,4,5,6,7};
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int c = search(arr, k,sz);
//	if (c == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标是%d", c);
//	return 0;
//} 


//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1。
//void Add(int*p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//
//	return 0;
//}


//函数的嵌套调用和链式访问
// 不可以嵌套定义但可以嵌套调用
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问
//	//printf("%d\n", strlen("abc"));
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//Return Value
//	//On success, the total number of characters written is returned.
//	
// return 0;
//}


//函数递归  程序调用自身的编程技巧称为递归（ recursion）
//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题
//死递归
//int main() {
//	printf("hehe");
//	main();
//	return 0;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4

//void print(unsigned int num) {
//	if (num > 9)
//		print(num/10);
//	printf("%d	", num % 10);
//
//}
//
//int main() {
//	unsigned int num = 1234;
//	print(num);
//
//
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//迭代
//求n的阶乘。（不考虑溢出）
//int Jiecheng(int a) {
//	if (a > 0)
//		return a * Jiecheng(a - 1);
//	else
//		return 1;
//}

//求第n个斐波那契数。（不考虑溢出）
//int Fibonacci_sequence(int n) {
//	if (n >2)
//		return Fibonacci_sequence(n - 1) + Fibonacci_sequence(n - 2);
//	if(n<=2)
//		return 1;
//}
//
//int main() {  
//	printf("%d\n", Fibonacci_sequence(4));
//}

//有一些功能：可以使用迭代的方式实现，也可以使用递归
//递归可以求解，但是效率太低
//int Fib(int n)
//{
//	//统计第3个斐波那契数的计算机次数
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//汉诺塔
//int Hanoi_count(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return 2*Hanoi_count(int n-1) + 1;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int c = Hanoi_count(int n);
//	printf("%d", c);
//	return 0;
//}



//数组

//一维数组
//数组的创建
//type_t   arr_name[const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小

//数组的初始化
//数组的初始化是指，在创建数组的同时给数组的内容一些合理初始值（初始化）。
//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//int arr1[10] = { 1,2,3 };//不完全初始化
//int arr2[] = { 1,2,3,4 };
//int arr3[5] = { 1，2，3，4，5 }；
//char arr4[3] = { 'a',98, 'c' };
//char arr5[] = { 'a','b','c' };
//char arr6[] = "abcdef";

//int main() {
//	char arr[] = "abcdef";
//
//	printf("%d", sizeof(arr) / sizeof(arr[0]));
//	//7
//	printf("%d",strlen(arr));
//	//6
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//%p - 是按地址的格式打印 - 十六进制的打印

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//二维数组
//int main()
//{
//	//创建
//	//int arr[3][4];
//	//char ch[3][10];
//	//初始化 - 创建的同时给赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr[3][4] = { 1,2,3,4,5,6,7};//不完全初始化 - 后面补0
//	//int arr[3][4] = { {1,2}, {3,4} ,{4,5} };
//	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{		
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//二维数组在数组中存储
//	//int arr[][4] = { {1,2}, {3,4} ,{4,5} };
//	//int i = 0;
//	//int j = 0;
//	//int* p = &arr[0][0];
//
//	//for (i = 0; i < 12; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//
//	return 0;
//}


 

//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void bubble_sort(int arr[], int sz)//形参arr本质是指针
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//
//	//排序为升序 - 冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//数组传参的时候，传递的其实是数组首元素的地址
//
//	return 0;
//}



//数组名是什么？
//数组名是数组首元素的地址
// 但是有2个例外
//1. sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arr取出的是数组的地址
//	printf("%p\n", &arr+1);//相差40
//
//
//	printf("%p\n", arr);//2
//	printf("%p\n", arr+1);//2   //相差4
//
//	//printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//数组名表示整个数组
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//数组名是首元素的地址
//
//	return 0;
//}

