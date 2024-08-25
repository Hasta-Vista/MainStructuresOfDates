#include <deque>
#include <iostream>
using namespace std;
int main()
{
    int requests, x, type;
    cin >> requests;
    deque<int>deck;
    for (int i = 0; i != requests; ++i) {
        cin >> type;
        switch (type) {
        case 1:
            cin >> x;
            deck.push_back(x);
            break;
        case 2:
            deck.pop_front();
            break;
        }
        if (!deck.empty()) {
            cout << deck.front() << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

