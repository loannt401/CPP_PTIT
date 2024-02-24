#include<iostream>
#include<cmath>
using namespace std;

bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=1;
        for(int i=2; i<n; i++){
            if(snt(i) && snt(n-i)){
                cout<<i<<" "<<n-i<<endl;
                d=0;
                break;
            }
        }
        if(d==1) cout<<" "<<endl;
    }
    return 0;
}