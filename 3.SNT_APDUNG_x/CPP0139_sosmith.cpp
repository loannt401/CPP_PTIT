#include<iostream>
#include<cmath>
using namespace std;


bool snt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int tongchuso(int n){
    int t=0;
    while(n>0){
        int x=n%10;
        t+=x;
        n/=10;
    }
    return t;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n; 
        int s=n;       
        if(snt(s)==false){
            int d=0;
            while(n%2==0){
                d+=2;
                n/=2;
            }
            if(n==1){
                if(d==tongchuso(s)) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else{
                int k=0;
                int i=3;
                for(int i=3; i<=n; i+=2){
                    while(n%i==0){
                        k+=tongchuso(i);
                        n/=i;
                    }
                    if(n==1) break;
                }
            if(d+k==tongchuso(s)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
        } else cout<<"NO"<<endl;
    }
    return 0;
}