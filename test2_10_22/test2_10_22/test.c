#define _CRT_SECURE_NO_DEPRECATE 1

/*
* �����ӣ��������ַ������ӡ�
* ����һ����������һ������ĩβ������һ���´���
*��ע�⣺����ĩβ��\0)������������s1��s2����s2������s1֮������һ���´�s
*/


#include <stdio.h>

#define MAX_LEN 20

typedef struct
{
    char ch[MAX_LEN];
    int len;
}string;

string connect(string s1, string s2) {

    string s;
    int i;

    if (s1.len + s2.len <= MAX_LEN)
    {
        for (i = 0; i < s1.len; i++)
        {
            s.ch[i] = s1.ch[i];
        }
        for (i = 0; i < s2.len; i++)
        {
            s.ch[s1.len - 1 + i] = s2.ch[i];
        }
        s.len = s1.len + s2.len - 1;
    }
    else
    {
        s.len = 0;
    }
      
    return(s);
}
int main()
{
    string a1 = { "lichengxiang",13 };
    string a2 = { "niua",5 };
    string a;//�µ��ַ���
    a = connect(a1, a2);
    printf("\n%s\n%d", a.ch, a.len);

    return 0;
}
