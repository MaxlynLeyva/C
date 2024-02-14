#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 10;//a占4个字节 - 
//	int * pa = &a;//拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	//a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个之指针变量。
//	return 0;
//}

//总结：指针变量，用来存放地址的变量。（存放在指针中的值都被当成地址处理）。


//指针的类型
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）
//int main()
//{
//	int arr[10] = { 0 };
//	int  *p = arr;
//	char *pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//11111111
//	//    8421
//	//
//	/*    int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;*/
//
//	//int* pa = &a;
//	//*pa = 0;
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}  


//野指针概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）

//野指针成因
//1. 指针未初始化
//int main()
//{
//    int* p;//局部变量指针未初始化，默认为随机值
//    *p = 20;//非法访问内存
//		//这里的p就是一个野指针
//    return 0;
//}

//2.越界访问
//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 11; i++)
//    {
//        //当指针指向的范围超出数组arr的范围时，p就是野指针
//        *(p++) = i;
//    }
//    return 0;
//}

//3. 指针指向的空间释放

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();
//	*p = 20;
//
//	return 0;
//}


// 如何规避野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放及时置NULL
//4. 避免返回局部变量的地址
//5. 指针使用之前检查有效性

//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL; 
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//
//	//C语言本身是不会检查数据的越界行为的
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	//printf("%d\n", &arr[9] - &c[0]);//err
//
//	printf("%d\n", &arr[9] - &arr[0]);
//	结果是9
//	return 0;
//}

//指针-指针得到的是两个指针之间元素的个数



#include <string.h>
//计数器
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
//递归
//指针-指针

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////指针的关系运算
//for (vp = &values[N_VALUES]; vp > &values[0];)
//{
//    *--vp = 0;
//}
//
////代码简化, 这将代码修改如下
//for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//{
//    *vp = 0;
//}

//实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证它可行。
//标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
//指向第一个元素之前的那个内存位置的指针进行比较。


//指针和数组
//数组名表示的是数组首元素的地址。以下两种情况除外：
// 1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组。
// 2. & 数组名，取出的是数组的地址。 & 数组名，数组名表示整个数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//
//	int* p = arr;//数组名表示的是数组首元素的地址。

//	printf("%p\n", arr); 
//	printf("%p\n", &arr[0]);

//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[] 是一个操作符  2和arr是两个操作数
//	//a+b
//	//b+a
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//
//	//arr[2] --> *(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}


//二级指针
//指针变量也是变量，是变量就有地址，那指针变量的地址存放在哪里？这就是二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//
//	//ppa就是一个二级指针变量
//	int ** ppa = &pa;//pa也是个变量，&pa取出pa在内存中起始地址
//	int*** pppa = &ppa;
//
//	return 0;
//}


// 指针数组
//指针数组是指针还是数组？
//答案：是数组。是存放指针的数组。
//数组我们已经知道整形数组，字符数组。
//int main()
//{
//	int arr[10];//整形数组 - 存放整形的数组就是整形数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* pch[5];
//
//	return 0;
//}



//结构体
//结构体类型的声明
//结构体初始化
//结构体成员访问
//结构体传参

//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//struct B
//{
//	char c;
//	short s;
//	double d;
//};

struct Stu
{
	//成员变量
	char name[20];//名字
	int age;//年龄
	char id[20];//学号
};

//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//} s1,s2;	//s1和s2也是结构体变量//s1,s2是全局变量


//int main()
//{
//	struct Stu s = { {'w', 20, 3.14}, "张三", 30, "202005034"};//对象
//	//s是局部变量
//	//.  ->
//	//printf("%c\n", s.sb.c);
//	//printf("%s\n", s.id);
//
//	/*struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);*/
//
//	return 0;
//}

//结构成员的类型
//结构的成员可以是标量、数组、指针，甚至是其他结构体。

//struct Point
//{
//	int x;
//	int y;
//}p1;
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化




//结构体传参

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s);  //传结构体
	print2(&s); //传地址
	return 0;
}

//上面的 print1 和 print2 函数哪个好些？
//答案是：首选print2函数。
//原因：
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的
//下降。


