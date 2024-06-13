#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int resul;

        int resul1 = static_cast<int>(ceil(static_cast<double>(n) / 2));
        int resul2 = static_cast<int>(ceil(static_cast<double>(n) / 3));

        if (n != 1) {
            if (n % 2 == 0) {
                resul1 = n / 2;
            }
            if (n % 3 == 0) {
                resul2 = n / 3;
            }
            resul = min(resul1, resul2);
        } else {
            resul = 2;
        }
        cout << resul << endl;
    }
    return 0;
}
