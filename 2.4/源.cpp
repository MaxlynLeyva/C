#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//C������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ����֧����ѡ����䣩
// //if��䣬switch���
//3.ѭ���ṹ
// //while,for,do while

////����1
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//}
////����2
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ����\n");
//    }
//    else
//    {
//        printf("����\n");
//    }
//    return 0;
//}
////����3
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("����\n");
//    }
//    else if (age >= 18 && age < 30)
//    {
//        printf("����\n");
//    }
//    else if (age >= 30 && age < 50)
//    {
//        printf("����\n");
//    }
//    else if (age >= 50 && age < 80)
//    {
//        printf("����\n");
//    }
//    else
//    {
//        printf("�ϲ���\n");
//    }
//    return 0;
//}


//int main()
//{
//    if (���ʽ)
//    {
//        ����б�1��
//    }
//    else
//    {
//        ����б�2��
//    }
//    return 0;
//}

//������ʽ�Ľ��Ϊ�棬�����ִ�С�
//��C��������α�ʾ��٣�
//0��ʾ�٣���0��ʾ��


////�������
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


//������Ա�
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
 

//�Լ�����
//1. �ж�һ�����Ƿ�Ϊ����
//2. ���1 - 100֮�������






//int main() {
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//		printf("����");
//	else
//		printf("ż��");
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


//����1���������һ
//����2��������ڶ�
//����3�����������
//����4�����������
//����5�����������
//����6�����������
//����7�����������
//д�� if...else if ...else if ����ʽ̫����

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//        case 1:
//            printf("����һ\n");
//            break;
//        case 2:
//            printf("���ڶ�\n");
//            break;
//        case 3:
//            printf("������\n");
//            break;
//        case 4:
//            printf("������\n");
//            break;
//        case 5:
//            printf("������\n");
//            break;
//        case 6:
//            printf("������\n");
//            break;
//        case 7:
//            printf("������\n");
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
//�������ֵ�����е�case��ǩ��ֵ����ƥ����ô�죿
//��ȫ�����������ⲻ��һ������
//���ǣ�����㲢������Բ�ƥ�����б�ǩ�ı��ʽ��ֵʱ����ô���أ�
//ÿ��switch�����ֻ�ܳ���һ��default�Ӿ������Գ���������б���κ�λ��


//while����е�break��continue
// �²�������
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

//break��whileѭ���е����ã�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//���ԣ�while�е�break������������ֹѭ���ġ�


//continueʵ��
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
//continue��whileѭ���е����þ��ǣ�
//continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�
//����ֱ����ת��while�����жϲ��֡�������һ��ѭ��������жϡ�

//ʹ��forѭ�� ����Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 0;
//	for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//break��continue��forѭ����
//break��continue���������whileѭ������һ���ġ�

//������
//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        printf("ѭ��");
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


//1. ���� n�Ľ׳ˡ�
//2. ���� 1!+ 2!+ 3!+ ���� + 10!
//3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����

////1. ���� n�Ľ׳ˡ�

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


////2. ���� 1!+ 2!+ 3!+ ���� + 10!
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

////3. ��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
////����������һ˫Ь����������Ҷ���Ǯ����˵������300Ԫ���㻹�Ǻ��棬����֪�����׶��٣��Ҿ�����£���ÿ�β��м�����

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
//		printf("�ҵ���,�±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//}


////4.��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //whileѭ��ʵ��
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //forѭ��ʵ��
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


////5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
////��ʾ��¼�ɣ�������ξ�����������˳�����
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