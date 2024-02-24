#include<iostream>
using namespace std;
typedef long long int ull;

bool fibo(ull n){
    ull f0=0, f1=1, fn=0;
    while(fn<n){
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
        if(fn==n) return true;
        return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        if(fibo(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}