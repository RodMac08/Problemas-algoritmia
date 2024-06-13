#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int tiendas, dias;
    cin >> tiendas;

    vector<int> precios(tiendas);
    for (int i = 0; i < tiendas; i++) {
        cin >> precios[i];
    }

    sort(precios.begin(), precios.end()); 

    cin >> dias;
    vector<int> monedas(dias);
    for (int i = 0; i < dias; i++) {
        cin >> monedas[i];
    }

    for (int i = 0; i < dias; i++) {
        int contador = upper_bound(precios.begin(), precios.end(), monedas[i]) - precios.begin();
        cout << contador << endl;
    }
    
    return 0;
}
