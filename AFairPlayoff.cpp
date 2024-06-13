#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s[4];
		cin >> s[0] >> s[1] >> s[2] >> s[3];

		int ganadorPrim = max(s[0], s[1]);
		int ganadorSegu = max(s[2], s[3]);

		int MayorHab = max(ganadorPrim, ganadorSegu);
		int SegMayHab = min (ganadorPrim, ganadorSegu);

		for(int i = 0; i < 4; i++){
			if(s[i] > SegMayHab && s[i] < MayorHab){
				SegMayHab = s[i];
			}
		}

		if((ganadorPrim == MayorHab && ganadorSegu == SegMayHab) || (ganadorPrim == SegMayHab && ganadorSegu == MayorHab)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}