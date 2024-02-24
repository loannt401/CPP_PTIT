#include<iostream>
#include<cmath>
using namespace std;
/*
    Hai trường hợp:
        - Số không chia hết cho hai 
        - Số chia hết cho hai
            + số lũy thừa 2
            + số (2^k)*m (m là số lẻ)
                vd:
                    100 = 2^2 * 25
Các ước của 25 bao gồm 1, 5 và 25, vậy ta sẽ có 6 số:

    2^1 * 1 = 2
    2^2 * 1 = 4
    2^1 * 5 = 10
    2^2 * 5 = 20
    2^1 * 25 = 50
    2^2 * 25 = 100
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0) cout<<0<<endl;
        else{
            int d=0;
            while(n%2==0){
                d++;
                n/=2;
            }
            if(n==1) cout<<d<<endl;
            else{
                int k=2;
                for(int i=3; i<=sqrt(n); i+=2){
                    if(n%i==0 && i!=n/i) k+=2;
                    if(n%i==0 && i==n/i) k++;
                }
                cout<<d*k<<endl;
            }
        }
    }
    return 0;
}