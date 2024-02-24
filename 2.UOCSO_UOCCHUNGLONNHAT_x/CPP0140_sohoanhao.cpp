#include<iostream>
#include<cmath>
using namespace std;

/*
int sohoanhao(long long n){
    long long sum=1; 
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i!=n/i){
                sum+=i+n/i;
            }
            else sum+=i;
        }
    }
    if(sum==n) return 1;
    return 0;
}
*/

//  2^(p-1) * ( 2^p - 1) => so hoan hao
// neu p la snt va 2^p - 1 la snt thi ra dc so hoan hao

int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

long long a[10];
void sohoanhao(){
    int n=0;
    for(int i=2; i<=32; i++){
        if(snt(i)){
            int tmp = (int)pow(2,i)-1;
            if(snt(tmp)){
                a[n++] = 1ll * (int)pow(2,i-1) * tmp;
            }
        }
    }
}

int main(){
    sohoanhao();
    int t; cin>>t;
    while(t--){
        long long n;cin>>n;
        int ok=0;
        for(int i=0; i<=10; i++){
           if(!a[i]) break;
            if(a[i]==n){
                ok=1;
                break;
            }
        }
        if(ok) cout<<'1'<<endl;
        else cout<<'0'<<endl;
    }
    return 0;
}