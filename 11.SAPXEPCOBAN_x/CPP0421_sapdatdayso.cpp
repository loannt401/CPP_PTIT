#include<iostream>
using namespace std;

long long timkiem(long long a[], long long n, long long x){
    for(int i=0; i<n; i++){
        if(a[i]==x){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            if(timkiem(a,n,i)) cout<<i<<" ";
            else cout<<-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}