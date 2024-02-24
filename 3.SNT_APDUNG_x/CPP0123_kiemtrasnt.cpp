#include<iostream>
#include<cmath>

using namespace std;

bool snt(long x){
	if(x<2) return false;
	for(size_t i=2; i<=sqrt(x); i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
    long n;
    cin >> n;
    if(snt(n)==true) cout << "YES";
    else cout << "NO";
    
    return 0;
}