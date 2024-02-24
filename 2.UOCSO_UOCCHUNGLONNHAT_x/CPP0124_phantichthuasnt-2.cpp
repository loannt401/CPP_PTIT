#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long n;
    cin >> n;
    int d=0;
    while(n%2==0){
        d++;
        n/=2;
    }
    if(d>0) cout<<2<<" "<<d<<endl;
    for(int i=3; i<=sqrt(n); i+=2){
            int c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            if(c>0) cout <<i<<" "<<c<<endl;
    }
    if(n>1) cout <<n<<" "<<1;
    return 0;
}