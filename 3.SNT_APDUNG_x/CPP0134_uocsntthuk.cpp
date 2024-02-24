#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d=0;
        cin>>n>>k;
        for(int i=2;i<=n;i++){
            while(n%i==0){
                d++;
                n/=i;
                if(d==k){
                    cout<<i<<endl;
                    break;
                } 
            }
        } 
        if(d<k) cout<<"-1"<<endl;
    }
    return 0;
}