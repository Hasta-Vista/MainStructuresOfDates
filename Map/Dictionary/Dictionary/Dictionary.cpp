#include <iostream>
#include <map>
using namespace std;
int main()
{
    int requests,x,y;
    cin >> requests;
    map<int, int>dictionary;
    for (int i = 0; i != requests; ++i) {
        int type;
        cin >> type;
        switch(type){
        case 1:
            cin >> x >> y;
            dictionary[x] = y;
            break;
        case 2:
            cin >> x;
            map<int, int>::iterator key;
            key = dictionary.find(x);
            if (key != dictionary.end()) {
                cout << key->second << endl;
            }
            else {
                cout << "-1"<< endl;
            }
            break;
        }
    }
    return 0;
}

