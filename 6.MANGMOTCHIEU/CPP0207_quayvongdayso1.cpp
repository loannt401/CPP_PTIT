#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,d; cin>>n>>d;
        int a[n];
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=d+1; i<=n; i++) cout<<a[i]<<" ";
        for(int i=1; i<=d; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}