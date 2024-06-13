#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	string nuevo;

	for(int i = 0; i < s.length(); i++){
		char c = s[i];
		if( c != '+'){
			nuevo += s[i];
		}
	}
	
	sort(nuevo.begin(),nuevo.end());

	for(int i = 0; i < nuevo.length(); i++){
		cout << nuevo[i];
		if(i < nuevo.length()-1){
			cout << "+";
		}
	}

	cout << endl;
	return 0;
}