#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        bool ok=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==k) ok=1;
        }
        if(ok==1) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
    return 0;
}