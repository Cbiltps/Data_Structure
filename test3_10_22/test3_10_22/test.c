#define _CRT_SECURE_NO_DEPRECATE 1

//两串相等判断：给定两个串s1和s2，当s1和s2相等时，返回函数值1，否则返回函数值0

#include<stdio.h>

#define MAX_LEN 25

 
typedef struct
{
	char ch[MAX_LEN];
	int len;
}string;

int equal(string s1, string s2)
{
	int i;
	if (s1.len != s2.len)

	{
		return (0);
	}
	else
	{
		for (i = 0; i < s1.len; i++)
		{
			if (s1.ch[i] != s2.ch[i])
			{
				return(0);
			}	
		}	
	}

	return(1);
}
int main()
{ 
	string a1 = { "niua",6 };
	string a2 = { "niua",6 };
	int r;
	r = equal(a1, a2);
	printf("\n%d", r);

	return 0;
}
