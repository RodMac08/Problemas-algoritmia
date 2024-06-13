#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string code = "codeforces";
		char c;
		cin >> c;
		int index = code.find(c);
		if(index != string::npos){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}

	}
	return 0;
}