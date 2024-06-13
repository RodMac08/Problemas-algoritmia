#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;

	for(int i = 0; i < s.size();){
		char actual = s[i];
		char siguiente = s[i+1];

		if(actual == '.'){
			cout << 0;
			i++;
			continue;
		}
		if(actual == '-' && siguiente == '.'){
			cout << 1;
			i+=2;
			continue;
		}
		if(actual == '-' && siguiente == '-'){
			cout << 2;
			i+=2;
			continue;
		}
	}
	cout << "" << endl;
	return 0;
}