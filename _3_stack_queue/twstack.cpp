#include"twstack.h"
#include<cstdio>
#include<cstdlib>

//��ʼ��
void initstack(twStack& tws) {
    tws.upStackTop = MAX_SIZE;
    tws.downStackTop = -1;
}

twStatus push(twStack& tws, int i, int x) {
    //0 ������ջ��, 1������ջ��
    return  i ? pushUp(tws, x) : pushDown(tws, x);
}

int pop(twStack& tws, int i) {
    //0 ����ջ����pop, 1 ����ջ����pop
    return  i ? popDown(tws) : popUp(tws);
}

//�����ջ����pop Ԫ��, ����-1�������
int popUp(twStack& tws) {
    //������, ���Ƿ���Ԫ��
    if (tws.downStackTop < 0)
        return -1;
    return tws.data[tws.downStackTop--];
}


//�����ջ����popԪ��
int popDown(twStack& tws) {
    //������, ���Ƿ���Ԫ��
    if (tws.upStackTop >= MAX_SIZE)
        return -1;
    return tws.data[tws.upStackTop++];
}


// ����push
twStatus pushUp(twStack& tws, int x) {

    if (stackFull(tws))
    {
        printf("stack is full");
        exit(1);
    }
    else
    {
        tws.upStackTop--;
        tws.data[tws.upStackTop] = x;
    }
}

//����push
twStatus pushDown(twStack& tws, int x) {
    if (stackFull(tws))
    {
        printf("stack is full");
        exit(1);
    }
    else
    {
        tws.downStackTop++;
        tws.data[tws.downStackTop] = x;
    }
}

// 1��ʾfull, 0��ʾδfull
twStatus stackFull(twStack& tws) {
    if (tws.downStackTop - 1 >= tws.upStackTop) {
        return 1;
    }
    return 0;
}

void printTWStack(twStack& tws) {
    int downStackTop = tws.downStackTop;
    int topEnd = MAX_SIZE - 1;

    //��ӡ����ջ
    printf("upStackTop: [");
    while (topEnd >= tws.upStackTop) {
        printf("%d  ", tws.data[topEnd--]);
    }
    printf("> \n");

    //��ӡ����ջ
    printf("downStack:  <");
    while (downStackTop >= 0) {
        printf("%d  ", tws.data[downStackTop--]);
    }
    printf("] \n");
}


