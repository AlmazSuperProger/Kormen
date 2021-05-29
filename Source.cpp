#include "iostream"
using namespace std;

int main()
{
	int A[] = { 13,12,10,111,2,4,5,9,11,12,17 };
	int arrayLen = sizeof(A) / sizeof(A[0]);
	int key;
	int i;

	for (int j = 1; j < arrayLen; j++) {
		key = A[j];
		i = j - 1;
		while ((i >= 0) && key < A[i]) {
			A[i + 1] = A[i];
			i = i - 1;
		};
		A[i+1] = key;
	};
	
	for (int i = 0; i < arrayLen; i++) {
		cout << A[i] << endl;
	}
}