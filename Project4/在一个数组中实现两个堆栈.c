//#include <stdio.h>
//#include <stdlib.h>
//
//#pragma warning(disable:4996)
//#define ERROR 1e8
//typedef int ElementType;
//typedef enum { push, pop, end } Operation;//push=0;pop=1;end=2
//typedef enum { false, true } bool;
//typedef int Position;
////其中Tag是堆栈编号，取1或2；MaxSize堆栈数组的规模；Stack结构定义如下：
//struct SNode {
//    ElementType* Data;
//    Position Top1, Top2;
//    int MaxSize;
//};
//typedef struct SNode* Stack;
////注意：如果堆栈已满，Push函数必须输出“Stack Full”并且返回false；如果
////某堆栈是空的，则Pop函数必须输出“Stack Tag Empty”（其中Tag是该堆栈的编号），并且返回ERROR。
//
////函数接口定义：
//Stack CreateStack(int MaxSize);
//bool Push(Stack S, ElementType X, int Tag);
//ElementType Pop(Stack S, int Tag);
//
//Operation GetOp();  /* details omitted */
//void PrintStack(Stack S, int Tag); /* details omitted */
//int GetOp();//读取操作
//
//
//
//
//
//int main()
//{
//    int N, Tag = 1, X = 1;
//    Stack S;
//    int done = 0;
//    int c = 0;
//
//    scanf("%d", &N);
//    S = CreateStack(N);
//    while (c != 2) {
//        switch (c = GetOp()) {
//        case push:
//            scanf("%d %d", &Tag, &X);
//            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
//            break;
//        case pop:
//            scanf("%d", &Tag);
//            X = Pop(S, Tag);
//            if (X == ERROR) printf("Stack %d is Empty!\n", Tag);
//            break;
//        case end:
//            /* PrintStack(S, 1);
//             PrintStack(S, 2);
//             done = 1;*/
//            break;
//        }
//    }
//
//    return 0;
//}
///* 你的代码将被嵌在这里 */
//Stack CreateStack(int MaxSize)
//{
//    Stack S = (Stack)malloc(sizeof(Stack));
//    S->Data = (int*)malloc(sizeof(int) * MaxSize);
//    S->Top1 = -1;
//    S->Top2 = MaxSize;
//    S->MaxSize = MaxSize;
//    return S;
//}
//bool Push( Stack S, ElementType X, int Tag )
//{
//    if(S->Top2-S->Top1==1)
//    {
//        printf("Stack Full\n");
//        return false;
//    }
//    else
//    {
//        if(Tag==1) S->Data[++(S->Top1)]=X;
//        else if(Tag==2) S->Data[--(S->Top2)]=X;
//        return true;
//    }
//}
//ElementType Pop(Stack S, int Tag)//出栈
//{
//
//    if (Tag == 1)
//    {
//        if (S->Top1 == -1) { printf("Stack %d Empty\n", Tag); return ERROR; }
//        //S->Data[S->Top1] = 0;
//        S->Top1--;
//        return S->Data[S->Top1 + 1];
//    }
//    else
//    {
//        if (S->Top2 >= S->MaxSize) { printf("Stack %d Empty\n", Tag); return ERROR; }
//        //S->Data[S->Top2] = 0;//注意不要将这个变0，否则就固定return 0了
//        S->Top2++;
//        return S->Data[S->Top2 - 1];
//    }
//}
//
//
//
//
//int GetOp()
//{
//    char s[10] = { '\0' };
//    scanf("%s", s);
//    switch (s[1])
//    {
//    case 'u':return 0;
//    case 'o':return 1;
//    case 'n':return 2;
//    }
//}
