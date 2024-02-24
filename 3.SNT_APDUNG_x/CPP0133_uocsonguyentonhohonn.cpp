#include<iostream>
#include<cmath>

using namespace std;

int snt(int x){
	
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int main(){
    int t;
    do cin >> t;
    while(t<1 && t>100);
    while(t--){
       int n;
       cin >> n;
       for(int i=2; i<=n; i++){
    		if(snt(i)==1) cout << i << " ";
	   }
	   cout << endl;
    }
    return 0;
}