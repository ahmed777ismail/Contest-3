#include <iostream>
#include<algorithm>
using namespace std;



int main()
{
	int size, num;
	cin >> size >> num;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + size);
	reverse(arr, arr + size);
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
}

