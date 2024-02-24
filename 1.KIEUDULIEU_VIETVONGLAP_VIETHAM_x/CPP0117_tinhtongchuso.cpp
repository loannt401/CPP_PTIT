#include<iostream>
using namespace std;

int ttcs(int n){
    if(n<10) return n;
    int t=0;
    while(n>0){
        int x=n%10;
        t+=x;
        n/=10;
    }
    return ttcs(t);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << ttcs(n)<< endl;
    }
    return 0;
}