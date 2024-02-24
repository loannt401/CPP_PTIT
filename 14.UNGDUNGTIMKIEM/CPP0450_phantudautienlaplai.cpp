#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        bool b[1000000]={0};
        bool ok=0;
        for(int i=0; i<n; i++){
            if(b[a[i]]==1){
                cout<<a[i];
                ok=1;
                break;
            }
            b[a[i]]=1;
        }
        if(!ok) cout<<-1;
        cout<<endl;
    }
    
    return 0;
}