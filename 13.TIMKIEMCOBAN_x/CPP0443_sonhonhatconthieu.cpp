#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long a[n-1];
        long long sum=0;
        for(int i=1; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(n+1)*n/2 - sum <<endl;
    }
    return 0;
}

// tổng từ 1 đến n bằng n*(n+1)/2 
// tìm số còn thiếu trong (1,n) 