#include <iostream>
#include <string>

using namespace std;

bool esBerlanese(string s){
	for(int i = 0; i < s.size(); i++){
		char c = s[i];
		if(c == 'n'){
			continue;
		}else if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){//Si es consonante
			//Si es consonante y si la siguiente letra no es vocal
			if(i == s.length() -1 || (s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u')){
				return false;
			}
		}
	}
	return true;
}

int main(){
	string s;
	cin >> s;

	if(esBerlanese(s)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
}