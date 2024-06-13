#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, k, l;
	cin >> n >> k >> l;
	double producto = n * k;
	double resul = ceil(producto / l);
	cout << resul << endl;
	return 0;
}