#pragma once
#include <iostream>
using namespace std;

typedef struct Node {
	char n;
	Node* next;
}Node, *PNode;


class LinkStack
{
private:
	PNode bottom;   //ջ��ָ�룬ָ��ջ�׵�һ��Ԫ�ء�
	PNode top;      //ջ��ָ�룬��������ͷ��㣩ָ��ջ��Ԫ��֮����һ����λ��
	int length;     //ջԪ�ظ���
public:
	LinkStack() {
		top = new Node();
		top->next = 0;
		bottom = top;
		length = 0;
		//��ʼ��ջ
	}
	~LinkStack() {
		ClearStack();
		delete top;
	}
	void ClearStack();
	bool StackEmpty() {
		return length == 0 ? true : false;
	}
	int StackLength() {
		return length;
	}
	int GetTop(char* e);
	void Push(char e);
	void Pop(char *e);
};

