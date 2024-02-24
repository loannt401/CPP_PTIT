#include<iostream>
#include<math.h>
using namespace std;

int snt(int a){
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return a>1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int first, last; cin>>first>>last;
        int cnt=0;
        for(int i=first; i<=last; i++){
            if(snt(i)) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}