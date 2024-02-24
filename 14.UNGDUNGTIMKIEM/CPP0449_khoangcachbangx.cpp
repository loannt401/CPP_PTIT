#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        set<int> s(a,a+n);
        int ok=0;
        for(int i=0; i<n; i++){
            int c = a[i]+k;
            if(s.find(c)!=s.end()){
                cout<<1<<endl;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1<<endl;
    }
    return 0;
}
