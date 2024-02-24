#include<iostream>
#include<cmath>
using namespace std;

int snt(long long n){
    if(n<2) return 0;
    for(long long i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int d=0;
        for(long long i=2; i<=sqrt(n); i++){
            if(snt(i)) d++;
        }
        cout<<d<<endl;
    }
    return 0;
}