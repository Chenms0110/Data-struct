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
	PNode bottom;   //栈底指针，指向栈底第一个元素。
	PNode top;      //栈顶指针，（类似于头结点）指向栈顶元素之上上一个空位。
	int length;     //栈元素个数
public:
	LinkStack() {
		top = new Node();
		top->next = 0;
		bottom = top;
		length = 0;
		//初始化栈
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

