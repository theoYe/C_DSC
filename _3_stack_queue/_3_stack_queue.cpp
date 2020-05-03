// main.cpp : 此文件包含 "main" 函数束。程序执行将在此处开始并结。
//

#include<stdio.h>
#include "twstack.h"

int main()
{
	twStack twstack;

	initstack(twstack);

	push(twstack, 1, 3);
	push(twstack, 0, 4);
	push(twstack, 1, 5);
	push(twstack, 0, 6);
	pop(twstack, 0);
	printTWStack(twstack);
}

/**
 * 无法运行?
 * 是否有重定义?? 函数, 变量.
 * 
 */

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

void testStack2(){
	//Stack stack;
	//intializeStack(&stack);

	//push(&stack, 3);
	//push(&stack, 4);
	//push(&stack, 5);
	//push(&stack, 6);

	//pop(&stack);
	//printStack(&stack);

	//return 0;
}