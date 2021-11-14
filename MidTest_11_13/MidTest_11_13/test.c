#define _CRT_SECURE_NO_DEPRECATE 1

////两串相等判断：给定两个串s1和s2，当s1和s2相等时，返回函数值1，否则返回函数值0
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
* 串连接：将两个字符串连接。
* 其中一个串接在另一个串的末尾，生成一个新串。
*（注意：串的末尾有\0)若给出两个串s1和s2，把s2连接在s1之后，生成一个新串s
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
//    string a;//新的字符串
//    a = connect(a1, a2);
//    printf("\n%s\n%d", a.ch, a.len);
//
//    return 0;
//}


//
//#define _CRT_SECURE_NO_DEPRECATE 1
//
///*
//* 串的模式匹配：设有一目标串s和一模式串s1，判断目标串s中是否包含模式串s1。
//*/
//
//#include <stdio.h>
//
//#define MAX_LEN 25 //define定义的常变量
//
//typedef struct // 定义结构体，但是这里没有结构体名
//{
//    char ch[MAX_LEN];
//    int len;
//}string;// 重新定义结构体名为string
//
//int index(string s, string t, int pos) { //自定义函数
//    int i;
//    int j;
//    i = pos;
//    j = 0;//从t的最前面的字符串开始
//
//    while (i < s.len && j < t.len)//都不能超出字符串长度，超出停止循环
//    {
//        if (s.ch[i] == t.ch[j])//匹配
//        {
//            ++i;//成功就往后加
//            ++j;//成功就往后加
//        }
//        else//不匹配
//        {
//            i = i - j + 1;//从s中的第二个字符开始
//            j = 0;//赋值为0，使后面从t的第一个字符开始
//        }
//    }
//
//    if (j > t.len - 1)//当s中剩余的字符串长度小于t的字符串长度的时候停止
//    {
//        return (i - t.len);//匹配成功，返回s在t中的位置
//    }
//    else
//    {
//        return (-1);//匹配成功，就返回-1
//    }
//}
//
//int main() // 主函数
//{
//    string a = { "Beijing Shanghai China",22 };//初始化结构体类型
//    string a1 = { "Shanghai",8 };
//    int r = index(a, a1, 0);
//    printf("匹配的字符串在第%d个位置！\n", r);
//
//    return 0;//返回值
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



////第五题
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
////第一题
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
////第二题
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ((num % 4 == 0) && (num % 7 == 0))
//	{
//		printf("可以");
//	}
//	else
//	{
//		printf("不可以");
//	}
//	return 0;
//}
//
//
////第三题
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
//        t = c;//t为最大值
//    }
//    printf("%d", c);
//    return 0;
//}

//第四题
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
	default:printf("输入错误请重新输入！");
		break;
	}
	return 0;
}