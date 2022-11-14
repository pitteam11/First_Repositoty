#include <iostream>
#include <string>

using namespace std;

void test_twoword() {
	string str;
	//cin >> str;
	getline(cin, str);
	str += " 23233";
	cout << str << endl;
}

int*  checkRepeat(int* arr1, int* arr2) {
	int N = _msize(arr1) / sizeof(arr1[0]);
	int K = _msize(arr2) / sizeof(arr2[0]);

	int* arr3; // {1, 3, 3}

	int P = 0;

	bool povtor;
	for (int n = 0; n < N; ++n) {
		povtor = false;
		for (int k = 0; k < K; ++k) {
			if (arr1[n] == arr2[k]) {
				povtor = true;
				break;
			}
		}
		if (povtor == false) {
			for (int n2 = 0; n2 < n; n2++) {
				if (arr1[n] == arr1[n2]) {
					povtor = true;
					break;
				}
			} if (povtor == false) {
				P++;
				//cout << arr1[n] << ", ";
			}
		}
	}

	arr3 = new int[P];
	int p = 0;
	for (int n = 0; n < N; ++n) {
		povtor = false;
		for (int k = 0; k < K; ++k) {
			if (arr1[n] == arr2[k]) {
				povtor = true;
				break;
			}
		}
		if (povtor == false) {
			for (int n2 = 0; n2 < n; n2++) {
				if (arr1[n] == arr1[n2]) {
					povtor = true;
					break;
				}
			} if (povtor == false) {
				arr3[p++] = arr1[n];
			}
		}
	}
	return arr3;	
}

void main() {
	int* arr1 = new int[] {1, 2, 3, 3, 5};
	int* arr2 = new int[] {2, 4, 5, 7, 8, 9};
	
	
	int *res = checkRepeat(arr1, arr2);

	for (int k = 0; k < _msize(res) / sizeof(res[0]); k++) {
		cout << res[k] << ", ";
	}
	cout << endl;	
	delete[] arr1;
	delete[] arr2;
	delete[] res;
}