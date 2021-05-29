#include "iostream"

using namespace std;

// —ортировка выбором. »щем минимальный элемент и ставим его A[0], среди остальных ищем минимальный и ставим его A[1] и т.д

int main() {
	int A[] = { 2,4,5,6,1,1,12,3,4,8,6,4 };
	int lenA = sizeof(A) / sizeof(A[0]);
	int min;
	int index;

	for (int j = 0 ; j < lenA-1; j++) {
		min = A[j];
		for (int i = j+1; i < lenA; i++) {
			if (A[i] < min) {
				min = A[i];
				index = i;
			};
		};
		A[index] = A[j];
		A[j] = min;
	};

	for (int i = 0; i < lenA; i++) {
		cout << A[i] << endl;
	}
}