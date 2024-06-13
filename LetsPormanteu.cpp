#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;

    string nS1;
    char v = 'o'; 
    for(int i = 0; i < s1.length(); i++){
        char c1 = s1[i];
        nS1.push_back(s1[i]);
        if((c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u') && i != 0){
            v = s1[i];
            nS1.pop_back();
            break;
        }
    }
    //cout << nS1 << endl;
    string nS2;
    for(int i = s2.length() - 1; i >= 0; i--){
        char c2 = s2[i];
        nS2 = c2 + nS2;
        if((c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u') && i != s2.length() - 1){
            v = s2[i];
            nS2.erase(nS2.begin());
            break;
        }
    }
    //cout << nS2 << endl;

    cout << nS1 << v << nS2 << endl;
}
