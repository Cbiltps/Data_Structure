#define _CRT_SECURE_NO_DEPRECATE 1

/*
* 串连接：将两个字符串连接。
* 其中一个串接在另一个串的末尾，生成一个新串。
*（注意：串的末尾有\0)若给出两个串s1和s2，把s2连接在s1之后，生成一个新串s
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
    string a;//新的字符串
    a = connect(a1, a2);
    printf("\n%s\n%d", a.ch, a.len);

    return 0;
}
