/*****************************************************************//**
 * \file   stack.h
 * \brief
 * ջ�ĵ�һ��ʵ�ַ�ʽ
 * ʹ��
 *
 * \author Ҷΰΰ
 * \date   May 2020
 *********************************************************************/

#pragma once

#include<cstdio>
#include<cstdlib>


 //���״̬����
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define STACK_INIT_SIZE 100; // �洢�ռ��ʼ������
#define STACKINCREMENT 10;    // �洢�ռ����ÿ�ε�����

//���ؽ������ΪStatus
typedef int Status;

typedef int SElemType;
typedef int Elemtype;
typedef int ElemType;



//˳��ջ���ݽṹ
typedef struct Stack
{
    SElemType* base;//ջ��ָ�� ����
    SElemType* top;//ջ��ָ�� һֱ��ջ��Ԫ����һ��λ��
    int stacksize;//ջ���õ��������
}SqStack;






// ��������
Status InitStack(SqStack& S);

/**
 * .
 * push����, ��˳��ջ�����Ԫ��
 * \param S
 * \param e
 * \return
 */
Status Push(SqStack& S, ElemType e);

/**
 * ��e���ҷ�����ֵ
 * \param S
 * \param e
 * \return
 */
Status Pop(SqStack& S, ElemType& e);

void printStack(SqStack& s);




