#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n]; 
        for(int i=0; i<n; i++) cin>>a[i];
        int res=-100000;
        for(int i=1; i<n; i++){
            for(int j=i-1; j>=0; j--){
                int hieu = a[i]-a[j];
                res = max(res, hieu );
            }        
        }
        cout<<res<<endl;
    }
    return 0;
}