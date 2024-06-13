#include <iostream>
using namespace std;

int main() {
    int n, x;
    int cont = 0;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        if (x % i == 0) {
            int j = x / i;
            if (j <= n) {
                cont++;
            }
        }
    }

    cout << cont << endl;
    return 0;
}
