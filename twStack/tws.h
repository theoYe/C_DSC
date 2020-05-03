/*****************************************************************//**
 * \file   tws.h
 * \brief
 * 双向栈
 * 假设以顺序存储结构实现一个双向栈，
 * 即在一维数组的存储空间中存在着两个栈，它们的栈底分别设在数组的的两个端点。
 * \author 叶伟伟
 * \date   May 2020
 *********************************************************************/
#pragma once
typedef int twStatus;
#define MAX_SIZE 100

typedef struct {
    int upStackTop; //上面栈top索引位置
    int downStackTop;  //下面栈的top索引位置
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
