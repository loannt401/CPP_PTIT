#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int tim = 0;
        for(int i=0; i<n; i++){
            if(a[i]<=k) tim++;
        }
        int bad = 0;
        for(int i=0; i<tim; i++){
            if(a[i]>k) bad++;
        }
        int i=0, j=tim;
        int kq = bad;
        while(j<n){
            if(a[i]>k) bad--;
            if(a[j]>k) bad++;
            kq = min(kq,bad);
            i++; j++;
        }
        cout<<kq<<endl;
    }
}