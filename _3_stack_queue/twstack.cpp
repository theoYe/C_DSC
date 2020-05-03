#include"twstack.h"
#include<cstdio>
#include<cstdlib>

//初始化
void initstack(twStack& tws) {
    tws.upStackTop = MAX_SIZE;
    tws.downStackTop = -1;
}

twStatus push(twStack& tws, int i, int x) {
    //0 往上面栈推, 1往下面栈推
    return  i ? pushUp(tws, x) : pushDown(tws, x);
}

int pop(twStack& tws, int i) {
    //0 上面栈往下pop, 1 下面栈往上pop
    return  i ? popDown(tws) : popUp(tws);
}

//下面的栈向上pop 元素, 返回-1代表出错
int popUp(twStack& tws) {
    //错误检查, 看是否有元素
    if (tws.downStackTop < 0)
        return -1;
    return tws.data[tws.downStackTop--];
}


//上面的栈往下pop元素
int popDown(twStack& tws) {
    //错误检查, 看是否有元素
    if (tws.upStackTop >= MAX_SIZE)
        return -1;
    return tws.data[tws.upStackTop++];
}


// 往上push
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

//往下push
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

// 1表示full, 0表示未full
twStatus stackFull(twStack& tws) {
    if (tws.downStackTop - 1 >= tws.upStackTop) {
        return 1;
    }
    return 0;
}

void printTWStack(twStack& tws) {
    int downStackTop = tws.downStackTop;
    int topEnd = MAX_SIZE - 1;

    //打印上面栈
    printf("upStackTop: [");
    while (topEnd >= tws.upStackTop) {
        printf("%d  ", tws.data[topEnd--]);
    }
    printf("> \n");

    //打印下面栈
    printf("downStack:  <");
    while (downStackTop >= 0) {
        printf("%d  ", tws.data[downStackTop--]);
    }
    printf("] \n");
}


