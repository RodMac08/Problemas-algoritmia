#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int numeros[n];
    int even_count = 0, odd_count = 0;
    int even_ind = -1, odd_ind = -1;

    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            even_count++;
            even_ind = i + 1;
        } else {
            odd_count++;
            odd_ind = i + 1;
        }
    }

    if (even_count == 1) {
        cout << even_ind << endl;
    } else {
        cout << odd_ind << endl;
    }

    return 0;
}
