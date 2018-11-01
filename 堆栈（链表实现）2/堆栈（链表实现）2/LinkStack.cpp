#include "LinkStack.h"
 
void LinkStack::ClearStack() {
	if (length != 0) {
		PNode p = top->next;
		PNode s;
		while (p) {
			s = p->next;
			delete p;
			p = s;
		} //用p不断删除top后的每一个元素，直到p指空
		length = 0;  //清空后length归0
		bottom = top; // 栈底与栈首指向同一位置，（即头结点）
	}
}

int LinkStack::GetTop(char* e) {
	if (length != 0) {
		return top->next->n;
	}
	else {
		return -1;
	}
}

void LinkStack::Push(char e) {
	PNode p = new Node();
	p->n = e;
	PNode s = top->next;
	top->next = p;
	p->next = s;
	length++;
	if (length == 1) {
		bottom = p;
	}
}
void LinkStack::Pop(char *e) {
	if (length != 0) {
		*e = top->next->n;
		PNode p = top->next;
		PNode s;
		s = p->next;
		delete p;
		length--;
		top->next = s;
	}
}