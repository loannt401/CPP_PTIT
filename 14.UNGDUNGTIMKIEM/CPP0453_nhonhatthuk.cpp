#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=k; i++){
            int min_pos = i;
            for(int j=i+1; j<=n; j++){
                if(a[j]<a[min_pos]) min_pos = j;
            }
            swap(a[i],a[min_pos]);
        }
        cout<<a[k]<<endl;
    }
    return 0;
}
