
#include <stdio.h>
#include <stdlib.h>
#include "stack2.h"

/**
 * 初始化栈,此时没有元素 top=-1
 * 
 * \param stackPtr
 */


void intializeStack(Stack * stackPtr)
{
    stackPtr->top = -1;
}

/**.
 * 看栈是否为空
 * \param stackPtr
 * \return 
 */
bool stackEmpty(const Stack* stackPtr) {
    if (stackPtr->top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool stackFull(const Stack* stackPtr) {
    return stackPtr->top >= MAXSTACK;
}
void push(Stack* stackPtr, ElemType item) {
    if (stackFull(stackPtr))
    {
        printf("stack is full");
        exit(1);
    }
    else
    {
        stackPtr->top++;
        stackPtr->data[stackPtr->top] = item;
    }
}
ElemType pop(Stack* stackPtr) {
    //错误检查, 看是否有元素
    if (stackPtr->top < 0)
        return ERROR;
    return stackPtr->data[stackPtr->top--];
}


void printStack(Stack* s){
    int top = s->top;

    while(top >=0){
        printf("%d ", s->data[top--]);
    }
        
    printf("] \n");
}