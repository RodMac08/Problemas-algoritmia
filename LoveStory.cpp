#include <iostream>
#include <string>

using namespace std;

int main(){
	string original = "codeforces";
	int t;
	cin >> t;
	while(t--){
	string s;
	cin >> s;
	int cont = 0;
	for(int i = 0; i < original.length(); i++){
		char c1 = original[i];
		char c2 = s[i];
		if(c1 != c2){
			cont++;
		}
	}
	cout << cont << endl;
	}
	return 0;
}