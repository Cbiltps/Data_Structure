/*���ݴ��Ļ���������ɴ����Һ��滻����*/

#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

#define MAX_LEN 255

typedef unsigned char String[MAX_LEN + 1];

int strLength(String S)//�󴮵ĳ���
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

//�滻
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
				f = 1;//����
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
				for (j = 0; j < strLength(s2); j++, k++)//�滻
				{
					t[k] = s2[j];
				}	
				i = i + strLength(s1);
			}
			else
			{
				t[k] = s[i];//����һ���ַ�
				k++;
				i++;
			}
		}
	}
	StringCopy(s, t);//�����ַ���
}
 
void main()
{
	String str;
	String  temp, substr;

	printf("����������->");
	scanf("%s", str);

	printf("��������ҵ��ַ���->");
	scanf("%s", temp);

	printf("�������滻���ַ���->");
	scanf("%s", substr);

	Replace(str, temp, substr);
	printf("���ַ���Ϊ->");
	printf("%s\n", str);
}
