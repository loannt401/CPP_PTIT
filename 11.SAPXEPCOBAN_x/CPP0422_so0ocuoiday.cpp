#include<iostream>
using namespace std;
typedef unsigned long long int ull;

int main(){
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        int dem=0;
        ull a[n];
        for(ull i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0) dem+=1;
        }
        for(ull i=0; i<n; i++) if(a[i]>0) cout<<a[i]<<" ";
        for(int i=0; i<dem; i++) cout<<'0'<<" ";
        cout<<endl;
    }
    return 0;
}