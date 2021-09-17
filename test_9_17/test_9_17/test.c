#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef int datatype;

//ʹ�ýṹ�崴��˳�������
typedef struct
{
	datatype elem[MAX];
	int Last;

}List, * SeqList;


//��ʼ��˳���
SeqList InitList()  
{
	SeqList L;
	L = (SeqList)malloc(sizeof(List));
	L->Last = -1;
	return L;
}

//����˳���
void CreateList(SeqList L)
{
	int i, n;
	printf("��������Ҫ������˳���Ԫ�ظ��� n = ");
	scanf("%d", &n);
	printf("��������Ҫ������˳���:");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &L->elem[i]);
		L->Last++;
	}
}


//����Ԫ������λ��
int Location(SeqList L, datatype x)
{
	int i = 0;
	while (L->elem[i] != x && i < L->Last)
		i++;
	if (i > L->Last)
		return -1;
	else
		return i;
}

//����Ԫ��
void Insertelem(SeqList L, datatype m)
{
	int i, n;
	printf("��������Ҫ�����λ�� n = ");
	scanf("%d", &n);
	if ((L->Last + 1) > MAX)
		printf("������,���ܲ���");
	else
	{
		L->Last++;
		for (i = L->Last; i >= n - 1; i--)
		{
			L->elem[i + 1] = L->elem[i];
		}
		L->elem[n - 1] = m;
	}
}


//ɾ������ĳԪ��
void Deleteelem(SeqList L, datatype m)
{
	int i, j;
	i = Location(L, m);

	while (i == -1)
	{
		datatype n;
		printf("�������ҵ�Ԫ�ز��ڱ���,������������Ҫɾ����Ԫ��");
		scanf("%d", &n);
		i = Location(L, n);
	}

	for (j = i; j <= L->Last; j++)
	{
		L->elem[j] = L->elem[j + 1];
	}
	L->Last--;
}

//��ʾ��ǰ˳���
void ShowList(SeqList L)
{
	int i;
	printf("��ǰ˳���Ԫ��Ϊ:");
	for (i = 0; i <= L->Last; i++)
		printf("%5d", L->elem[i]);
}



int main()
{
	int Opration = 0;
	SeqList L;
	L = InitList();
	CreateList(L);
	printf("1:Ϊɾ��ĳԪ��\n");
	printf("2:Ϊ����ĳԪ��\n");
	printf("3:Ϊ����ĳԪ��\n");
	printf("4:Ϊ�����ǰ˳���\n");
	printf("5:Ϊ�˳�\n");
	printf("\n");

	while (Opration <= 5)
	{
		scanf("%d", &Opration);
		if (Opration == 1)
		{
			int n;
			printf("��������Ҫɾ����Ԫ�� n = ");
			scanf("%d", &n);
			Deleteelem(L, n);
		}

		if (Opration == 2)
		{
			int n;
			printf("��������Ҫ�����Ԫ�� n = ");
			scanf("%d", &n);
			Insertelem(L, n);
		}

		if (Opration == 3)
		{
			datatype x;
			printf("��������Ҫ���ҵ�Ԫ�� x = ");
			scanf("%d", &x);
			printf("��Ԫ����˳����е�λ��Ϊ%d\n", Location(L, x) + 1);
		}

		if (Opration == 4)
			ShowList(L);

		if (Opration == 5)
			break;
	}

	return 0;
}








