#include <iostream>
using namespace std;



int main()
{
	int testCases;
	cin >> testCases;
	while (testCases--)
	{
		int size;
		cin >> size;
		int even = 0;
		int odd = 0;

		for (int i = 0; i < size; i++)
		{
			int value;
			cin >> value;
			if (value % 2 == 0)
			{
				even++;
			}
			else {
				odd++;
			}
		}
		if (even == odd)
		{
			cout << "0" << endl;
		}
		else if (size % 2 != 0) {
			cout << "-1" << endl;
		}
		else
		{
			cout << abs(even - odd) / 2 << endl;
		}
	}

}

