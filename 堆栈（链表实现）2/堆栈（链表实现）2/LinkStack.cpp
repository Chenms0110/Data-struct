#include "LinkStack.h"
 
void LinkStack::ClearStack() {
	if (length != 0) {
		PNode p = top->next;
		PNode s;
		while (p) {
			s = p->next;
			delete p;
			p = s;
		} //��p����ɾ��top���ÿһ��Ԫ�أ�ֱ��pָ��
		length = 0;  //��պ�length��0
		bottom = top; // ջ����ջ��ָ��ͬһλ�ã�����ͷ��㣩
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