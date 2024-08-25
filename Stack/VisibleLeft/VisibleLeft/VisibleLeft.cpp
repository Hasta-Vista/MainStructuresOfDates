#include <iostream>
using namespace std;
int main()
{
	int size;
	cin >> size;
	int* mas = new int[size];
	for (int i = 0; i != size; ++i) {
		cin >> mas[i];
	}
	
	for (int i = 0; i != size; ++i) {
		int count = 0;
		for (int j = 0; j < i; ++j) {
			if (mas[i - 1] < mas[i]) {
				if (mas[i] <= mas[j]){
					count = 0;
				}
				if (mas[i] > mas[j]) {
					count++;
				}
			}
		}
		cout << count;
		if (i < size - 1) {
			cout << " ";
		}
	}

		delete[] mas;
		return 0;
	
}

