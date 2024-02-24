#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+1];
        int ok=-1;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i++){
            if(a[i]==k){
                ok=i;
                break;
            }
        }
        cout<<ok<<endl;
    }
    return 0;
}