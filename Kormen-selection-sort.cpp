#include "iostream"

using namespace std;

// ���������� �������. ���� ����������� ������� � ������ ��� A[0], ����� ��������� ���� ����������� � ������ ��� A[1] � �.�

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