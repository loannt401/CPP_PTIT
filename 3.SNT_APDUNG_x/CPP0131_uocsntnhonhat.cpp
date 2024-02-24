#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long int ull;

bool snt(ull x){
	if(x<2) return false;
	for(ull i=2; i<=sqrt(x); i++){
		if(x%i==0) return false;
	}
	return true;
}

void nn(ull n){
    for(ull i=3; i<=sqrt(n); i+=2){
        if(n%i==0){
            cout<<i<<" ";
            break;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        for(ull i=1; i<=n; i++){
            if(i==1) cout<<i<<" ";
            if(i%2==0) cout<<'2'<<" ";
            else{
                if(snt(i)) cout<<i<<" ";
                else{
                    nn(i);
                }
            }
        }
        cout<<endl;
    }
    return 0;
}