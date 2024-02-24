#include<bits/stdc++.h>
using namespace std;

const long long modulo = pow(10,9)+7;
long long f[1000];
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        f[0]=0; f[1]=1;
        for(int i=2; i<=n; i++){
            f[i] = f[i-1]+f[i-2];
            f[i]%=modulo;
        }
        cout<<f[n]<<endl;
    }
    return 0;
}