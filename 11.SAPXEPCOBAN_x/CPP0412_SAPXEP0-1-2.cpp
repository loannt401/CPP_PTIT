#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int a;
        long long d0=0,d1=0,d2=0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==0) d0++;
            if(a==1) d1++;
            if(a==2) d2++;
        }
        for(int i=0; i<d0; i++) cout<<'0'<<" ";
        for(int i=0; i<d1; i++) cout<<'1'<<" ";
        for(int i=0; i<d2; i++) cout<<'2'<<" ";
        cout<<endl;
    }
    return 0;
}