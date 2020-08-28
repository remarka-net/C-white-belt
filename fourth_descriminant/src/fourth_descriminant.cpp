#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,x1,x2,D;
	cin >> a >> b >> c;
	if (!a&&!b)
		return 0;
	if (!a)
		cout << (x1 = (c=-c)/b);
	else
	D = pow(b,2) - 4 * a * c;
	
	if (D < 0)
		return 0;
	if (D > 0)
		cout<<(x2 = -b/2/a-(x1 = sqrt(D)/2/a))<<" "<<(x1 -= b/2/a)<<endl;
	else
		cout<<(x1 = x2 = -b/2/a)<<endl;
	return 0;
}
