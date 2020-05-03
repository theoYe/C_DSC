/*****************************************************************//**
 * \file   stack2.h
 * \brief  
 * ʵ��˳��ջ�ĵڶ��ַ�ʽ, ֱ�Ӵ洢����
 * 
 * \author Ҷΰΰ
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



