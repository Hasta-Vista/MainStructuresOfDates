#include <iostream>
#include <list>
using namespace std;
int main() {
    int requests, x, y;
    cin >> requests;
    list<int>list;
    for (int i = 0; i != requests; ++i) {
        int type;
        cin >> type;
        switch (type) {
        case 1:
            cin >> x >> y;
            if (x == 0) {
                list.insert(list.begin(), y);
            }
            else {
                auto position = list.begin();
                advance(position, x);
                list.insert(position, y);
            }
            break;
        case 2:
            cin >> x;
            if (x >= 1 && x < list.size() + 1) {
                auto position = list.begin();
                advance(position, x - 1);
                cout << *position << endl;
            }
            break;
        case 3:
            cin >> x;
            if (x >= 1 && x < list.size() + 1) {
                auto position = list.begin();
                advance(position, x - 1);
                list.erase(position);
            }
            break;
        }
    }

    return 0;
}