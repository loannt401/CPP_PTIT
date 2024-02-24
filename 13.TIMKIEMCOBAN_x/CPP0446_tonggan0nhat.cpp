#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        long long min2so = 1e6;
        int k=0, h=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int tong = abs(a[i]+a[j]);
                if(min2so>tong){
                    min2so = tong;
                    k=i; h=j;
                }
            }
        }
        cout<<a[h]+a[k]<<endl;
    }
    return 0;
}