#include<iostream>
#include<cmath>

using namespace std;

int snt(int x){
	if(x<2) return 0;
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
       int a,b;
       do cin >> a>>b;
       while(a>b);
       for(int i=a; i<=b; i++){
    		if(snt(i)==1) cout << i << " ";
	   }
	   cout << endl;
    }
    return 0;
}
