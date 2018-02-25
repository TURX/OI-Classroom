#include <iostream>
#include <algorithm>
using namespace std;
void bubble_sort(int arr[], int len) {
	int i, j;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int t = 0; t < n; t++) {
		cin >> arr[t];
	}
	int len = (int) sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for (int i = 0; i < len; i++)
		cout << arr[i] << ' ';
	cout << endl;
	return 0;
}
