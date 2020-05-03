/*****************************************************************//**
 * \file   tws.h
 * \brief
 * ˫��ջ
 * ������˳��洢�ṹʵ��һ��˫��ջ��
 * ����һά����Ĵ洢�ռ��д���������ջ�����ǵ�ջ�׷ֱ���������ĵ������˵㡣
 * \author Ҷΰΰ
 * \date   May 2020
 *********************************************************************/
#pragma once
typedef int twStatus;
#define MAX_SIZE 100

typedef struct {
    int upStackTop; //����ջtop����λ��
    int downStackTop;  //����ջ��top����λ��
    int data[MAX_SIZE];
}twStack;


void initstack(twStack&);

twStatus push(twStack& tws, int i, int x);

int pop(twStack& tws, int i);

void printTWStack(twStack& tws);

twStatus stackFull(twStack& tws);

twStatus pushDown(twStack& tws, int x);

twStatus pushUp(twStack& tws, int x);

int popDown(twStack& tws);

int popUp(twStack& tws);

twStatus push(twStack& tws, int i, int x);
