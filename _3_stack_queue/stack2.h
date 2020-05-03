/*****************************************************************//**
 * \file   stack2.h
 * \brief  
 * 实现顺序栈的第二种方式, 直接存储数组
 * 
 * \author 叶伟伟
 * \date   May 2020
 *********************************************************************/
#pragma once


#ifndef STACKH
#define STACKH
#include <stdbool.h>
#define MAXSTACK  20
#define ERROR -1
typedef  int ElemType;
struct StackRec
{
    int   top;
    ElemType  data[MAXSTACK];
};
typedef struct StackRec Stack;



void intializeStack(Stack* stackPtr);
bool stackEmpty(const Stack* stackPtr);
bool stackFull(const Stack* stackPtr);
void push(Stack* stackPtr, ElemType item);
ElemType pop(Stack* stackPtr);

#endif


void printStack(Stack* s);



