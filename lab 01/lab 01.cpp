#include<iostream>
using namespace std;
int main() {
	int arr[6]{5040,10080,6080,0,10080,5040 };
	int n = 0;
	cout << "Array (";
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << ",";
	}
	cout << ")\n";
	cout << "Pairs: ";
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 6; j++) {
			if (arr[i] + arr[j] % 10080 == 0) {
				cout << "(" << i << "," << j << ") ";
				n++;
			}
		}
	}
	cout << "Number of Answers: " << n << '\n';
	return 0;
}