#include <iostream>
using namespace std;



int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	int arr1;
	for (int i = 0; i < n; i++) {
		arr1 = (arr[i]) + 1;
		for (int j = 0; j < n; j++) {
			if (arr[j] == arr1) {
				cnt++;
				break;
			}
		}
	}

	cout << cnt;
	return 0;
	
}

