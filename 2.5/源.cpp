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

//1. дһ�����������ж�һ�����ǲ���������
//2. дһ�������ж�һ���ǲ������ꡣ
//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��

//1. дһ�����������ж�һ�����ǲ���������
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
////2. дһ�������ж�һ���ǲ�������
//int Runnian(int a) {
//	if (a % 4 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
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
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±���%d", c);
//	return 0;
//} 


//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
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


//������Ƕ�׵��ú���ʽ����
// ������Ƕ�׶��嵫����Ƕ�׵���
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
//	////��ʽ����
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


//�����ݹ�  �����������ı�̼��ɳ�Ϊ�ݹ飨 recursion��
//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С������
//���ݹ�
//int main() {
//	printf("hehe");
//	main();
//	return 0;
//}

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4

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

//��д��������������ʱ���������ַ����ĳ���
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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//����
//��n�Ľ׳ˡ��������������
//int Jiecheng(int a) {
//	if (a > 0)
//		return a * Jiecheng(a - 1);
//	else
//		return 1;
//}

//���n��쳲����������������������
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

//��һЩ���ܣ�����ʹ�õ����ķ�ʽʵ�֣�Ҳ����ʹ�õݹ�
//�ݹ������⣬����Ч��̫��
//int Fib(int n)
//{
//	//ͳ�Ƶ�3��쳲��������ļ��������
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


//��ŵ��
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



//����

//һά����
//����Ĵ���
//type_t   arr_name[const_n];
//type_t ��ָ�����Ԫ������
//const_n ��һ���������ʽ������ָ������Ĵ�С

//����ĳ�ʼ��
//����ĳ�ʼ����ָ���ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ������
//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//int arr1[10] = { 1,2,3 };//����ȫ��ʼ��
//int arr2[] = { 1,2,3,4 };
//int arr3[5] = { 1��2��3��4��5 }��
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
//	arr[4] = 5;//[] - �±����ò�����
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

//%p - �ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ

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
//	int* p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//��ά����
//int main()
//{
//	//����
//	//int arr[3][4];
//	//char ch[3][10];
//	//��ʼ�� - ������ͬʱ����ֵ
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	//int arr[3][4] = { 1,2,3,4,5,6,7};//����ȫ��ʼ�� - ���油0
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
//	//��ά�����������д洢
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


 

//void bubble_sort(int arr[], int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void bubble_sort(int arr[], int sz)//�β�arr������ָ��
//{
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;
//
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
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
//	//����Ϊ���� - ð������
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ
//
//	return 0;
//}



//��������ʲô��
//��������������Ԫ�صĵ�ַ
// ������2������
//1. sizeof(������) - ��������ʾ�������� - ���������������Ĵ�С,��λ���ֽ�
//2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//1 - &arrȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);//���40
//
//
//	printf("%p\n", arr);//2
//	printf("%p\n", arr+1);//2   //���4
//
//	//printf("%p\n", &arr[0]);//3
//
//	//int sz = sizeof(arr);//��������ʾ��������
//	//printf("%d\n", sz);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//
//	return 0;
//}

