
#include "stack.h"
/**
 * 初始化栈
 * \param S
 * \return 
 */
Status InitStack(SqStack  &S){
	int size = STACK_INIT_SIZE;
		//构造一个空栈
	S.base = (SElemType*)malloc(size * sizeof(SElemType));
		//申请失败, 报错
		if(!S.base) exit (OVERFLOW);
		//都指向空间末尾
		S.top = S.base;
		S.stacksize = STACK_INIT_SIZE ;
		return  OK;
}//InitStack


void printStack(SqStack& s) {
	SElemType* sTop = s.top;

	while(sTop != s.base){
		printf("%d ", *--sTop);
	}
	printf(" ] \n");

}
Status Pop(SqStack& S, SElemType& e) {
	// 检查是否为空
	if (S.top == S.base)
		return ERROR;

	e = *S.top--;
	return OK;
}

Status Push(SqStack& S, SElemType e) {
	//1. 错误检查, 是否已满
	if ((S.top - S.base) == S.stacksize)
		return ERROR;

	*S.top = e;
	S.top++;
	return  OK;
}//Push