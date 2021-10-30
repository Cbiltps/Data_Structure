/*根据串的基本操作完成串查找和替换操作*/

#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

#define MAX_LEN 255

typedef unsigned char String[MAX_LEN + 1];

int strLength(String S)//求串的长度
{
	int m;
	for (m = 0; S[m] != '\0'; m++);
	{
		return m;
	}
}

void StringCopy(String T, String S)
{
	int i;
	for (i = 1; i <= strLength(S); i++)
	{
		T[i] = S[i];
	}
	T[i] = '\0';
}

//替换
void Replace(String s, String s1, String s2)
{
	String t;
	int i, j, f;
	int k = 0;

	if (strLength(s) >= strLength(s1))
	{
		for (i = 0; i <= strLength(s);)
		{
			if (i <= strLength(s) - strLength(s1))
			{
				f = 1;//查找
				for (j = 0; j < strLength(s1); j++)
				{
					if (s[i + j] != s1[j])
					{
						f = 0;
						break;
					}
				}
			}
			else
			{
				f = 0;
			}

			if (f == 1)
			{
				for (j = 0; j < strLength(s2); j++, k++)//替换
				{
					t[k] = s2[j];
				}	
				i = i + strLength(s1);
			}
			else
			{
				t[k] = s[i];//复制一个字符
				k++;
				i++;
			}
		}
	}
	StringCopy(s, t);//复制字符串
}
 
void main()
{
	String str;
	String  temp, substr;

	printf("请输入主串->");
	scanf("%s", str);

	printf("请输入查找的字符串->");
	scanf("%s", temp);

	printf("请输入替换的字符串->");
	scanf("%s", substr);

	Replace(str, temp, substr);
	printf("新字符串为->");
	printf("%s\n", str);
}
