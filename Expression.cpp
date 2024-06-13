#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	int op1 = n1+n2*n3;
	int op2 = n1*(n2+n3);
	int op3 = n1*n2*n3;
	int op4 = (n1+n2)*n3;
	int op5 = n1+n2+n3;

	int mayor = max({op1, op2, op3, op4, op5});

	cout << mayor << endl;
	return 0;
}