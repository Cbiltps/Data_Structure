#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef int datatype;

//使用结构体创建顺序表类型
typedef struct
{
	datatype elem[MAX];
	int Last;

}List, * SeqList;


//初始化顺序表
SeqList InitList()  
{
	SeqList L;
	L = (SeqList)malloc(sizeof(List));
	L->Last = -1;
	return L;
}

//创建顺序表
void CreateList(SeqList L)
{
	int i, n;
	printf("请输入你要创建的顺序表元素个数 n = ");
	scanf("%d", &n);
	printf("请输入你要创建的顺序表:");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &L->elem[i]);
		L->Last++;
	}
}


//查找元素所在位置
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

//插入元素
void Insertelem(SeqList L, datatype m)
{
	int i, n;
	printf("请输入你要插入的位置 n = ");
	scanf("%d", &n);
	if ((L->Last + 1) > MAX)
		printf("表已满,不能插入");
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


//删除表中某元素
void Deleteelem(SeqList L, datatype m)
{
	int i, j;
	i = Location(L, m);

	while (i == -1)
	{
		datatype n;
		printf("你所查找的元素不在表中,请重新输入你要删除的元素");
		scanf("%d", &n);
		i = Location(L, n);
	}

	for (j = i; j <= L->Last; j++)
	{
		L->elem[j] = L->elem[j + 1];
	}
	L->Last--;
}

//显示当前顺序表
void ShowList(SeqList L)
{
	int i;
	printf("当前顺序表元素为:");
	for (i = 0; i <= L->Last; i++)
		printf("%5d", L->elem[i]);
}



int main()
{
	int Opration = 0;
	SeqList L;
	L = InitList();
	CreateList(L);
	printf("1:为删除某元素\n");
	printf("2:为插入某元素\n");
	printf("3:为查找某元素\n");
	printf("4:为输出当前顺序表\n");
	printf("5:为退出\n");
	printf("\n");

	while (Opration <= 5)
	{
		scanf("%d", &Opration);
		if (Opration == 1)
		{
			int n;
			printf("请输入你要删除的元素 n = ");
			scanf("%d", &n);
			Deleteelem(L, n);
		}

		if (Opration == 2)
		{
			int n;
			printf("请输入你要插入的元素 n = ");
			scanf("%d", &n);
			Insertelem(L, n);
		}

		if (Opration == 3)
		{
			datatype x;
			printf("请输入你要查找的元素 x = ");
			scanf("%d", &x);
			printf("此元素在顺序表中的位置为%d\n", Location(L, x) + 1);
		}

		if (Opration == 4)
			ShowList(L);

		if (Opration == 5)
			break;
	}

	return 0;
}








