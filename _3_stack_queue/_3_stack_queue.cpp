// main.cpp : 此文件包含 "main" 函数束。程序执行将在此处开始并结。
//

#include<stdio.h>
#include "stack2.h"

int main()
{
	Stack stack;
	intializeStack(&stack);

	push(&stack, 3);
	push(&stack, 4);
	push(&stack, 5);
	push(&stack, 6);
	
	pop(&stack);
	printStack(&stack);

	return 0;
}

void testStack1(){
//#include"stack.h"
	//SqStack sqStack;

	//InitStack(sqStack);

	//Push(sqStack, 3);
	//Push(sqStack, 4);
	//Push(sqStack, 5);
	//Push(sqStack, 6);
	//printStack(sqStack);
	//int a;
	//Pop(sqStack, a);
	//printStack(sqStack);
}