#define _CRT_SECURE_NO_DEPRECATE 1

//#include <stdio.h>
//void main()
//{
//    int sparse[5][10] = {     //ϡ�����еĶ���   
//                      0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
//                      0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
//                      0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
//                      0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
//                      0, 0, 0, 0, 0, 0, 0, 6, 0, 0 };
//    int compress[6][3];            // ��Ԫ��   
//    int i, j, k;
//
//    k = 1;                         // �趨������ֵ     
//    compress[0][0] = 5;            // ����sparse��5��  
//    compress[0][1] = 10;           // ����sparse��10�� 
//    compress[0][2] = 5;            // ����ʹ��5��Ԫ��  
//    for (i = 0; i < 5; i++)      // ��ά���е��߷�   
//        for (j = 0; j < 10; j++)
//            if (sparse[i][j] != 0) // Ԫ����û��ʹ��   
//            {
//                compress[k][0] = i;   // ��������         
//                compress[k][1] = j;   // ��������        
//                /* ����Ԫ��ֵ */
//                compress[k][2] = sparse[i][j];
//                k++;                  // ��һ��           
//            }
//    for (i = 0; i < 6; i++)      // ѹ�����е���ʾ   
//    {
//        for (j = 0; j < 3; j++)
//            printf("%2d ", compress[i][j]);
//        printf("\n");               // ����             
//    }
//}




#include <stdio.h>
#include<stdlib.h>


typedef struct Bitnode
{
    char data;
    struct Bitnode* lchild, * rchild;
}Bitnode, * Bitree;



Bitree creat(Bitree T)/*��������������*/
{
    char x;
    scanf("%c", &x);
    if (x == '#') T = NULL;
    else
    {
        T = (Bitree)malloc(sizeof(Bitnode));
        if (!T)
        {
            printf("OVERFLOW\n");
            exit(-1);
        }
        else
        {
            T->data = x;
            T->lchild = creat(T->lchild);
            T->rchild = creat(T->rchild);
        }
    }
    return T;
}
void preorder(Bitree T)/*�����������������*/
{
    if (T != NULL)
    {
        printf("%c", T->data);
        preorder(T->lchild);
        preorder(T->rchild);
    }
}


main()/*������*/
{
    Bitree T = NULL; char x;
    printf("creat tree!\n");/*��������������и���Ԫ��*/
    T = creat(T);/*���ý�������������*/
    preorder(T);
        printf("\n");
}


//#define MAX 20
//#include <stdio.h>
//void main()
//{
//	int i;
//	int fib[MAX];
//	fib[0] = 0;
//	fib[1] = 1;
//	for (i = 2; i < MAX; i++)
//		fib[i] = fib[i - 1] + fib[i - 2];
//	for (i = 0; i < MAX; i++)
//		printf("%d%c", fib[i], (i % 5) == 4 ? '\n' : '\t');
//}
