
#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	int input;
	for(int i = 0; i < 2; i++)
	{
		cin >> input;
		sum += input;
	}
	cout << sum << endl;
	return 0;
}
