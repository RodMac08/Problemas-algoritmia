#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    
    long long min_ab = min(a, b);
    
    long long max_length = 2 * (min_ab + c);

    if (a > min_ab || b > min_ab) {
        max_length += 1;
    }

    cout << max_length << endl;
    return 0;
}

