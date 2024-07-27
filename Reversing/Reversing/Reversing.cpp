#include<algorithm>
#include <iostream>
using namespace std;



int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			reverse(arr, arr + i);
			
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

}


