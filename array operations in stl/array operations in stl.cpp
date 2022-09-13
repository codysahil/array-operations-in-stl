#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main() {
	int arr[6] = { 2,4,6,8,10,12 };
	int arr2[6];


	/* COPY */
	copy_n(arr, 6, arr2);
	for (int i = 0; i < 6; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	/* IOTA */
	int arr3[6] = { 0 };
	iota(arr3, arr+6, 100);
	for (int i = 0; i < 6; i++) {
		cout << arr3[i] << " ";
	}
	return 0;
}