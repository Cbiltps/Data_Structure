#define _CRT_SECURE_NO_DEPRECATE 1

/*
* ����ģʽƥ�䣺����һĿ�괮s��һģʽ��s1���ж�Ŀ�괮s���Ƿ����ģʽ��s1��
*/

#include <stdio.h>

#define MAX_LEN 25 //define����ĳ�����

typedef struct // ����ṹ�壬��������û�нṹ����
{
    char ch[MAX_LEN];
    int len;
}string;// ���¶���ṹ����Ϊstring

int index(string s, string t, int pos) { //�Զ��庯��
    int i;
    int j;
    i = pos;
    j = 0;//��t����ǰ����ַ�����ʼ

    while (i < s.len && j < t.len)//�����ܳ����ַ������ȣ�����ֹͣѭ��
    {
        if(s.ch[i] == t.ch[j])//ƥ��
        {
            ++i;//�ɹ��������
            ++j;//�ɹ��������
        }
        else//��ƥ��
        {
            i = i - j + 1;//��s�еĵڶ����ַ���ʼ
            j = 0;//��ֵΪ0��ʹ�����t�ĵ�һ���ַ���ʼ
        }
    }

    if (j > t.len - 1)//��s��ʣ����ַ�������С��t���ַ������ȵ�ʱ��ֹͣ
    {
        return (i - t.len);//ƥ��ɹ�������s��t�е�λ��
    }
    else
    {
        return (-1);//ƥ��ɹ����ͷ���-1
    }
}

int main() // ������
{
    string a = { "lichengxiang niua",17 };//��ʼ���ṹ������
    string a1 = { "niua",4 };
    int r = index(a, a1, 0);
    printf("ƥ����ַ����ڵ�%d��λ�ã�\n", r);
    
    return 0;//����ֵ
}
