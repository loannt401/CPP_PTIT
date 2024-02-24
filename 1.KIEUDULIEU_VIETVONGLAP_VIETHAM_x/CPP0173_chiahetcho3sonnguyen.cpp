#include<bits/stdc++.h>
#include<cmath>
using namespace std;

long long boi(long long a, long long b){
    return a*b/(__gcd(a,b)); // __gcd : uoc chung nho nhat
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,z,n;
        cin>>x>>y>>z>>n;
        long long bcnn = boi(x,boi(y,z));
        long long a = pow(10, n-1);
        long long b = pow(10, n);
        long long h = a/bcnn;
        long long k = b/bcnn;
        if(k<1) cout<<-1<<endl;
        else{
            if(h*bcnn < a){
                h++;
                cout<<h*bcnn<<endl;
            } else{
                cout<<h*bcnn<<endl;
            }
        }
    }
    return 0;
}

