#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//C语言是一门结构化的程序设计语言
//1.顺序结构
//2.选择结构（分支语句或选择语句）
// //if语句，switch语句
//3.循环结构
// //while,for,do while

////代码1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//}
////代码2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年\n");
//    }
//    else
//    {
//        printf("成年\n");
//    }
//    return 0;
//}
////代码3
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("少年\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("青年\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("中年\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("老年\n");
//    }
//    else
//    {
//        printf("老不死\n");
//    }
//    return 0;
//}


//int main()
//{
//    if (表达式)
//    {
//        语句列表1；
//    }
//    else
//    {
//        语句列表2；
//    }
//    return 0;
//}

//如果表达式的结果为真，则语句执行。
//在C语言中如何表示真假？
//0表示假，非0表示真


////提出问题
//int main() {
//	int a = 0;
//	int b = 1;
//	if (a ==1 )
//		if (b ==2 )
//			printf("tttt");
//	else
//		printf("jjjj");
//	return 0;
//}


//代码风格对比
//int num = 1;
//if (num == 5)
//{
//    printf("hehe\n");
//}

//int num = 1;
//if (5 == num)
//{
//    printf("hehe\n");
//}
 

//自己发挥
//1. 判断一个数是否为奇数
//2. 输出1 - 100之间的奇数






//int main() {
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//}

//int main() {
//	int a = 1;
//	while (a <= 100) {
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}


//输入1，输出星期一
//输入2，输出星期二
//输入3，输出星期三
//输入4，输出星期四
//输入5，输出星期五
//输入6，输出星期六
//输入7，输出星期日
//写成 if...else if ...else if 的形式太复杂

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//    }
//    return 0;
//}
//
//int main()
//{
//    int day = 0;
//    switch (day)
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//    }
//    return 0;
//}
//如果表达的值与所有的case标签的值都不匹配怎么办？
//会全部跳过，但这不是一个错误
//但是，如果你并不想忽略不匹配所有标签的表达式的值时该怎么办呢？
//每个switch语句中只能出现一条default子句它可以出现在语句列表的任何位置


//while语句中的break和continue
// 猜测输出结果
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//break在while循环中的作用：
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//所以：while中的break是用于永久终止循环的。


//continue实例
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//
//continue在while循环中的作用就是：
//continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
//而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。

//使用for循环 在屏幕上打印1-10的数字
//int main()
//{
//	int i = 0;
//	for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//break和continue在for循环中
//break和continue的意义和在while循环中是一样的。

//面试题
//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        printf("循环");
//        k++;
//    return 0;
//}


//int main()
//{
//    int i = 10;
//    do
//    {
//        printf("%d\n", i);
//    } while (i < 10);
//    return 0;
//}


//1. 计算 n的阶乘。
//2. 计算 1!+ 2!+ 3!+ …… + 10!
//3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

////1. 计算 n的阶乘。

//int main(){
//	int a = 0;
//	int b = 1;
//	scanf("%d", &a);
//
//	while (a > 0) {
//		b *= a;
//		a--;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}


////2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main() {
//	int a = 10;
//	int b = 0;
//	int sum = 1;
//	int JH = 0;
//	while (a>0) {
//		b = a;
//		while (b > 0) {
//			sum *= b;
//			b--;
//		}
//		JH += sum;
//		sum = 1;
//		a--;
//	}
//	printf("%d",JH);
//	return 0;
//}

////3. 在一个有序数组中查找具体的某个数字n。（讲解二分查找）
////比如我买了一双鞋，你好奇问我多少钱，我说不超过300元。你还是好奇，你想知道到底多少，我就让你猜，你每次猜中间数。

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标是%d\n", mid);
//	else
//		printf("找不到\n");
//}


////4.编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //while循环实现
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //for循环实现
//    for (left = 0, right = strlen(src) - 1;
//        left <= right;
//        left++, right--)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", target);
//    }
//    retutn 0;
//}


////5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
////提示登录成，如果三次均输入错误，则退出程序。
//int main()
//{
//    char psw[10] = "";
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; ++i)
//    {
//        printf("please input:");
//        scanf("%s", psw);
//        if (strcmp(psw, "password") == 0)
//            break;
//    }
//    if (i == 3)
//        printf("exit\n");
//    else
//        printf("log in\n");
//} 