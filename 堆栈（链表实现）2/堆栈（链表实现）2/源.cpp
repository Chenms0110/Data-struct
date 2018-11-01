#include "LinkStack.h"
#include <string>


int main() {

	LinkStack* fortest = new LinkStack();
	for (int i = 0; i < 5; i++) {
		string x1;
		cin >> x1;
		for (int i = 0; i < x1.size(); i++) {
			cout << x1[i] << endl;
		}
		cout << x1.size();

		char* n = new char;
		bool flag = false;
		int left = 0;
		int right = 0;;
		for (int i = 0; i < x1.size(); i++) {
			switch (x1[i]) {
			case '(':
			case '[':
			case '{':fortest->Push(x1[i]); left++; break;
			case '}': {
				fortest->Pop(n);
				if (*n == '{') {
					right++;
				}
			}
			case ']': {
				fortest->Pop(n);
				if (*n == '[') {
					right++;
				}
			}
			case ')': {
				fortest->Pop(n);
				if (*n == '(') {
					right++;
				}
			}
			default:break;
			}
		}

		if ((left == right) && (left != 0) && (right != 0)) {
			cout << "Æ¥Åä³É¹¦" << endl;
		}
		else {
			cout << "´íÎó" << endl;
		}
		fortest->ClearStack();
	}

	system("pause");
	return 0;
}