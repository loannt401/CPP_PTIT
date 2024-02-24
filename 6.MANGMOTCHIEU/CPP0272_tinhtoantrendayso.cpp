#include<iostream>
#include<algorithm>
using namespace std;
#define modulo 1000000007

int usc(int a, int b){
    return __gcd(a,b);
}

int usc_mang(int a[], int n){
    if(n==1) return a[0];
    int temp = a[0];
    for(int i=1; i<n; i++){
        temp = usc(temp, a[i]);
    }
    return temp;
}

int tich_mang(int a[], int n){
    long long tich = 1;
    for(int i=0; i<n; i++){
        tich = (tich*a[i]*1ll) % modulo;
    }
    return tich;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        long long tich = 1;
        for(int i=0; i< usc_mang(a,n); i++){
            tich = (tich*tich_mang(a,n)) % modulo;
        }
        cout<<tich<<endl;
    }
    return 0;
}