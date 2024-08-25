#include <string>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
bool Check(string& word1, string& word2) {
    int difference = 0;
    for (size_t i = 0; i != word1.size(); ++i) {
        if (word1[i] != word2[i]) {
            ++difference;
            if (difference > 1) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int quantity;
    cin >> quantity;
    vector<string>words;
    words.reserve(quantity);
    set<pair<string, string>> pairs;
    string word;
    for (size_t i = 0; i != quantity; ++i) {
        if (cin >> word) {
            words.push_back(word);
        }
    }
    for (size_t i = 0; i != words.size(); ++i) {
        for (size_t j = i + 1; j != words.size(); ++j) {
            if (Check(words[i], words[j])) {
                if (words[i] != words[j]) {
                    pairs.insert({ words[i],words[j] });
                }
            }
        }
    }
    cout << pairs.size() << endl;
    return 0;
}

