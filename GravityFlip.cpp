#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int columnas;
	cin >> columnas;
	vector<int> cajas(columnas);

	for(int i = 0; i < columnas; i++){
		cin >> cajas[i];
	}

	sort(cajas.begin(), cajas.end());

	for(int i = 0; i < columnas; i++){
		cout << cajas[i] << " ";
	}

	return 0;
}