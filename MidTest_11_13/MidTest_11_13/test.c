#define _CRT_SECURE_NO_DEPRECATE 1

////��������жϣ�����������s1��s2����s1��s2���ʱ�����غ���ֵ1�����򷵻غ���ֵ0
//
//#include<stdio.h>
//
//#define MAX_LEN 25
//
//
//typedef struct
//{
//	char ch[MAX_LEN];
//	int len;
//}string;
//
//int equal(string s1, string s2)
//{
//	int i;
//	if (s1.len != s2.len)
//
//	{
//		return (0);
//	}
//	else
//	{
//		for (i = 0; i < s1.len; i++)
//		{
//			if (s1.ch[i] != s2.ch[i])
//			{
//				return(0);
//			}
//		}
//	}
//
//	return(1);
//}
//int main()
//{
//	string a1 = { "niua",6 };
//	string a2 = { "niua",6 };
//	int r;
//	r = equal(a1, a2);
//	printf("\n%d", r);
//
//	return 0;
//}
//




//#define _CRT_SECURE_NO_DEPRECATE 1

/*
* �����ӣ��������ַ������ӡ�
* ����һ����������һ������ĩβ������һ���´���
*��ע�⣺����ĩβ��\0)������������s1��s2����s2������s1֮������һ���´�s
*/

//
//#include <stdio.h>
//
//#define MAX_LEN 20
//
//typedef struct
//{
//    char ch[MAX_LEN];
//    int len;
//}string;
//
//string connect(string s1, string s2) {
//
//    string s;
//    int i;
//
//    if (s1.len + s2.len <= MAX_LEN)
//    {
//        for (i = 0; i < s1.len; i++)
//        {
//            s.ch[i] = s1.ch[i];
//        }
//        for (i = 0; i < s2.len; i++)
//        {
//            s.ch[s1.len - 1 + i] = s2.ch[i];
//        }
//        s.len = s1.len + s2.len - 1;
//    }
//    else
//    {
//        s.len = 0;
//    }
//
//    return(s);
//}
//int main()
//{
//    string a1 = { "20111",6 };
//    string a2 = { "01201",6 };
//    string a;//�µ��ַ���
//    a = connect(a1, a2);
//    printf("\n%s\n%d", a.ch, a.len);
//
//    return 0;
//}


//
//#define _CRT_SECURE_NO_DEPRECATE 1
//
///*
//* ����ģʽƥ�䣺����һĿ�괮s��һģʽ��s1���ж�Ŀ�괮s���Ƿ����ģʽ��s1��
//*/
//
//#include <stdio.h>
//
//#define MAX_LEN 25 //define����ĳ�����
//
//typedef struct // ����ṹ�壬��������û�нṹ����
//{
//    char ch[MAX_LEN];
//    int len;
//}string;// ���¶���ṹ����Ϊstring
//
//int index(string s, string t, int pos) { //�Զ��庯��
//    int i;
//    int j;
//    i = pos;
//    j = 0;//��t����ǰ����ַ�����ʼ
//
//    while (i < s.len && j < t.len)//�����ܳ����ַ������ȣ�����ֹͣѭ��
//    {
//        if (s.ch[i] == t.ch[j])//ƥ��
//        {
//            ++i;//�ɹ��������
//            ++j;//�ɹ��������
//        }
//        else//��ƥ��
//        {
//            i = i - j + 1;//��s�еĵڶ����ַ���ʼ
//            j = 0;//��ֵΪ0��ʹ�����t�ĵ�һ���ַ���ʼ
//        }
//    }
//
//    if (j > t.len - 1)//��s��ʣ����ַ�������С��t���ַ������ȵ�ʱ��ֹͣ
//    {
//        return (i - t.len);//ƥ��ɹ�������s��t�е�λ��
//    }
//    else
//    {
//        return (-1);//ƥ��ɹ����ͷ���-1
//    }
//}
//
//int main() // ������
//{
//    string a = { "Beijing Shanghai China",22 };//��ʼ���ṹ������
//    string a1 = { "Shanghai",8 };
//    int r = index(a, a1, 0);
//    printf("ƥ����ַ����ڵ�%d��λ�ã�\n", r);
//
//    return 0;//����ֵ
//}



//#include <stdio.h>
//#define MAXLEN 25
//typedef struct
//{
//    char ch[MAXLEN];
//    int len;
//}string;
//int index(string s, string t, int pos) {
//    int i, j;
//    i = pos; j = 0;
//    while (i < s.len && j < t.len) {
//        if (s.ch[i] == t.ch[j]) { ++i; ++j; }
//        else { i = i - j + 1; j = 0; }
//    }
//    if (j > t.len - 1) return (i - t.len);
//    else return (-1);
//}
//
//main()
//{
//    string a = { "Beijing Shanghai China",22 }, a1 = { "Shanghai",8 };
//    int r;
//    r = index(a, a1, 0);
//    printf("\n%d", r);
//}



////������
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
////��һ��
//#include <stdio.h>
//int main()
//{
//	printf("******\n");
//	printf("*\n");
//	printf("*\n");
//	printf("*\n");
//	printf("******\n");
//	return 0;
//}
//
////�ڶ���
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ((num % 4 == 0) && (num % 7 == 0))
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}
//
//
////������
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//    int t = 0;
//    if (a > b)
//    {
//        t = a;
//    }
//    else
//    {
//        t = b;
//    }
//    if (c > t)
//    {
//        t = c;//tΪ���ֵ
//    }
//    printf("%d", c);
//    return 0;
//}

//������
#include <stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	switch (num/10)
	{
	case 10:
	case 9:printf("A");
		break;
	case 8:printf("B");
		break;
	case 7:printf("C");
		break;
	case 6:printf("D");
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E");
		break;
	default:printf("����������������룡");
		break;
	}
	return 0;
}