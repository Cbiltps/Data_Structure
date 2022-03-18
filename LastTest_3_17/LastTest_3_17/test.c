#define _CRT_SECURE_NO_DEPRECATE 1

//#include <stdio.h>
//void main()
//{
//    int sparse[5][10] = {     //稀疏阵列的定义   
//                      0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
//                      0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
//                      0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
//                      0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
//                      0, 0, 0, 0, 0, 0, 0, 6, 0, 0 };
//    int compress[6][3];            // 三元组   
//    int i, j, k;
//
//    k = 1;                         // 设定变数初值     
//    compress[0][0] = 5;            // 阵列sparse有5行  
//    compress[0][1] = 10;           // 阵列sparse有10列 
//    compress[0][2] = 5;            // 阵列使用5个元素  
//    for (i = 0; i < 5; i++)      // 二维阵列的走访   
//        for (j = 0; j < 10; j++)
//            if (sparse[i][j] != 0) // 元素有没有使用   
//            {
//                compress[k][0] = i;   // 储存行数         
//                compress[k][1] = j;   // 储存列数        
//                /* 储存元素值 */
//                compress[k][2] = sparse[i][j];
//                k++;                  // 下一列           
//            }
//    for (i = 0; i < 6; i++)      // 压缩阵列的显示   
//    {
//        for (j = 0; j < 3; j++)
//            printf("%2d ", compress[i][j]);
//        printf("\n");               // 换行             
//    }
//}




#include <stdio.h>
#include<stdlib.h>


typedef struct Bitnode
{
    char data;
    struct Bitnode* lchild, * rchild;
}Bitnode, * Bitree;



Bitree creat(Bitree T)/*建立二叉树函数*/
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
void preorder(Bitree T)/*先序遍历二叉树函数*/
{
    if (T != NULL)
    {
        printf("%c", T->data);
        preorder(T->lchild);
        preorder(T->rchild);
    }
}


main()/*主函数*/
{
    Bitree T = NULL; char x;
    printf("creat tree!\n");/*请求输入二叉树中各个元素*/
    T = creat(T);/*调用建立二叉树函数*/
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
