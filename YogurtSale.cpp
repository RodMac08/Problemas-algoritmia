#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		//Verificar si la cantidad de yogurt a comprar es par o impar
		if(n % 2 == 0){
			int c1 = n * a;
			int c2 = (n/2) * b;
			if(c1 < c2){
				cout << c1 << endl;
			}else{
				cout << c2 << endl;
			}
		}else{
			int c3 = n * a;
			int c4 = ((n-1)/2) * b + a;

			if(c3 < c4){
				cout << c3 << endl;
			}else{
				cout << c4 << endl;
			}
		}
	}
}