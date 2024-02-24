#include<iostream>
#include<cmath>
typedef unsigned long long int ull;
using namespace std;

int snt(ull x){
	if(x<2) return 0;
	for(ull i=2; i<=sqrt(x); i++){
		if(x%i==0) return 0;
	}
	return 1;
}

int main(){
    ull a,b,m,n;
    cin >> a>>b;
    if(a<b){
    	m=a;
    	n=b;
	} else{
		m=b;
		n=a;
	}
    for(ull i=m; i<=n; i++){
    	if(snt(i)==1) cout << i << " ";
	}
	cout << endl;

    return 0;
}