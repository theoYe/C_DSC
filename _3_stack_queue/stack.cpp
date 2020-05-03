
#include "stack.h"
/**
 * ��ʼ��ջ
 * \param S
 * \return 
 */
Status InitStack(SqStack  &S){
	int size = STACK_INIT_SIZE;
		//����һ����ջ
	S.base = (SElemType*)malloc(size * sizeof(SElemType));
		//����ʧ��, ����
		if(!S.base) exit (OVERFLOW);
		//��ָ��ռ�ĩβ
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
	// ����Ƿ�Ϊ��
	if (S.top == S.base)
		return ERROR;

	e = *S.top--;
	return OK;
}

Status Push(SqStack& S, SElemType e) {
	//1. ������, �Ƿ�����
	if ((S.top - S.base) == S.stacksize)
		return ERROR;

	*S.top = e;
	S.top++;
	return  OK;
}//Push