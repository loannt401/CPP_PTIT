#include<iostream>
#include<string.h>
using namespace std;

int cnt[1000001] = {0};

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];       
        for(int i=0; i<n; i++){
            cin>>a[i];
            cnt[a[i]]++;
        }
        int dem=0;
        for(int i=0; i<=1000001; i++){
            if(cnt[i]>1) dem+=cnt[i];
        }
        cout<<dem<<endl;
        memset(cnt,0,sizeof cnt);
    }
    return 0;
}