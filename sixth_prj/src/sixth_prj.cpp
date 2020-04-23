#include <math.h>
#include <iostream>
using namespace std;

int main() {
	double N, A, B, X, Y;
	// N - исходная стоимость товара
	// A - предел стоимости товара без скидки X
	// B - предел стоимости товара без скидки Y
	// If N > A (RUB) -> (N * X) / 100
	// if N > B (RUB) -> (N * Y) / 100
	cin >> N >> A >> B >> X >>Y;

	if (N > B) {
	cout << N - ((N*Y)/100);
	} else if (N > A){
		cout <<N - ((N*X)/100);
	}else
		cout << N;



	return 0;
}
