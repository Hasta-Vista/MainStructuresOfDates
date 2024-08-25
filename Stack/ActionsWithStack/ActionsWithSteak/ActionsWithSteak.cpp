#include <stack>
#include <iostream>
using namespace std;
int main()
{
	int requests,x;
	cin >> requests;
	stack<int>stack;
	for (int i = 0; i != requests; ++i) {
		int type;
		cin >> type;
		switch (type) {
		case 1:
			cin >> x;
			stack.push(x);
			break;
		case 2:
			if (stack.size() >= 1) {
				stack.pop();
			}
			break;
		}
		if (!stack.empty()) {
			cout << stack.top() << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	return 0;
}

