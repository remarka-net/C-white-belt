#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<int> v;
	cin >> n;
	if (n==1){
		cout<<1;
	}else{
	for (int i=0; i<10000; i++){
		int x;
		x = n%2;
		n = n/2;
		v.push_back(x);
		if (n==1){
			v.push_back(1);
			break;
		}else if(n==2){
			v.push_back(0);
			v.push_back(1);
			break;
		}
	}
	  for(int k = v.size()-1; k > -1; --k){

	        cout << v[k];
	  }
	}
	return 0;
}
