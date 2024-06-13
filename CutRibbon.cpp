#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxPiezas = 0;
    for (int i = 0; i <= n / a; ++i) {
        for (int j = 0; j <= n / b; ++j) {
            int remaining = n - i * a - j * b;
            if (remaining >= 0 && remaining % c == 0) {
                int piezas = i + j + remaining / c;
                maxPiezas = max(maxPiezas, piezas);
            }
        }
    }

    cout << maxPiezas << endl;

    return 0;
}
