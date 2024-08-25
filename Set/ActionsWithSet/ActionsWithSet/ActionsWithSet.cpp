#include <iostream>
#include <set>
using namespace std;
int main()
{
	set<int>plenty;
	int requests, x;
	cin >> requests;
	for (int i = 0; i != requests; ++i) {
		int type;
		cin >> type;
		switch (type) {
		case 1:
			cin >> x;
			plenty.insert(x);
			break;
		case 2:
			cin >> x;
			int check = plenty.count(x);
			if (check == 1) {
				cout << "1" << endl;
			}
			else
				cout << "0" << endl;
			break;
		}
	}
	return 0;
}


