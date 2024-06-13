#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct SerVivo {
    string nombre;
    string tipo;
    int posicion;
};

int main() {
    unordered_map<string, int> ordenPrioridad = {
        {"rat", 1},
        {"woman", 2},
        {"child", 2},
        {"man", 3},
        {"captain", 4}
    };

    int n;
    cin >> n;

    vector<SerVivo> seresVivos(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> seresVivos[i].nombre >> seresVivos[i].tipo;
        seresVivos[i].posicion = i;
    }

    sort(seresVivos.begin(), seresVivos.end(), [&](const SerVivo& a, const SerVivo& b) {
        if (ordenPrioridad[a.tipo] == ordenPrioridad[b.tipo]) {
            return a.posicion < b.posicion;
        }
        return ordenPrioridad[a.tipo] < ordenPrioridad[b.tipo];
    });

    for (const auto& ser : seresVivos) {
        cout << ser.nombre << endl;
    }

    return 0;
}
