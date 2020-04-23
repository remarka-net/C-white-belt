
#include <iostream>
using namespace std;

int main() {
	string h;
	cin >> h ;
	int k = 0 ;
	int g = -1 ;
	for (int i=0; i<= h.size(); ++i ){

		if (h[i] == 'f'){
			k+=1;
			if (k == 2)
				break;
			else
				continue;
		} else {
			g+=1;
		}
	}
		if (k == 0){
			cout << -2;
		} else if (k < 2) {
			cout << -1 ;
		} else if (k >= 2){
			cout << k + g ;
		}

	return 0;
}
