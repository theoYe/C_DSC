/*****************************************************************//**
 * \file   stack.h
 * \brief
 * 栈的第一种实现方式
 * 使用
 *
 * \author 叶伟伟
 * \date   May 2020
 *********************************************************************/

#pragma once

#include<cstdio>
#include<cstdlib>


 //结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define STACK_INIT_SIZE 100; // 存储空间初始分配量
#define STACKINCREMENT 10;    // 存储空间分配每次的增量

//返回结果类型为Status
typedef int Status;

typedef int SElemType;
typedef int Elemtype;
typedef int ElemType;



//顺序栈数据结构
typedef struct Stack
{
    SElemType* base;//栈底指针 不变
    SElemType* top;//栈顶指针 一直在栈顶元素上一个位置
    int stacksize;//栈可用的最大容量
}SqStack;






// 函数声明
Status InitStack(SqStack& S);

/**
 * .
 * push操作, 像顺序栈中添加元素
 * \param S
 * \param e
 * \return
 */
Status Push(SqStack& S, ElemType e);

/**
 * 用e并且返回其值
 * \param S
 * \param e
 * \return
 */
Status Pop(SqStack& S, ElemType& e);

void printStack(SqStack& s);




