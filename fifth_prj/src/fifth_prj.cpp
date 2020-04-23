#include <math.h>
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cin >> a >> b ;
	if (b == 0){
		cout <<"Impossible" << endl;
	}else{
		cout << a/b ;
	}
	return 0;
}
