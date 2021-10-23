#define _CRT_SECURE_NO_DEPRECATE 1

/*
* 串的模式匹配：设有一目标串s和一模式串s1，判断目标串s中是否包含模式串s1。
*/

#include <stdio.h>

#define MAX_LEN 25 //define定义的常变量

typedef struct // 定义结构体，但是这里没有结构体名
{
    char ch[MAX_LEN];
    int len;
}string;// 重新定义结构体名为string

int index(string s, string t, int pos) { //自定义函数
    int i;
    int j;
    i = pos;
    j = 0;//从t的最前面的字符串开始

    while (i < s.len && j < t.len)//都不能超出字符串长度，超出停止循环
    {
        if(s.ch[i] == t.ch[j])//匹配
        {
            ++i;//成功就往后加
            ++j;//成功就往后加
        }
        else//不匹配
        {
            i = i - j + 1;//从s中的第二个字符开始
            j = 0;//赋值为0，使后面从t的第一个字符开始
        }
    }

    if (j > t.len - 1)//当s中剩余的字符串长度小于t的字符串长度的时候停止
    {
        return (i - t.len);//匹配成功，返回s在t中的位置
    }
    else
    {
        return (-1);//匹配成功，就返回-1
    }
}

int main() // 主函数
{
    string a = { "lichengxiang niua",17 };//初始化结构体类型
    string a1 = { "niua",4 };
    int r = index(a, a1, 0);
    printf("匹配的字符串在第%d个位置！\n", r);
    
    return 0;//返回值
}
