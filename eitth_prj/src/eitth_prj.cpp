
#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int k = 0, g = -1;
	for(auto c : str)
		if(c != 'f')
			g++;
		else
			if(++k == 2)
				break;
	cout << (!k?-2:k<2?-1:k+g);
	return 0;
}
