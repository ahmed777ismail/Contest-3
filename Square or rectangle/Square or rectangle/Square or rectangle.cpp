#include <iostream>
using namespace std;




int main()
{
	int num1, num2;
	int counter;
	cin >> counter;
	while (counter--)
	{
		cin >> num1 >> num2;
		if (num1 == num2)
		{
			cout << "Square" << endl;
		}
		else {
			cout << "Rectangle" << endl;
		}
	}


}

