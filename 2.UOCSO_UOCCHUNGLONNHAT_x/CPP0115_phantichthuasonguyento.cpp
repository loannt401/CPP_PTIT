#include<iostream>
using namespace std;

int main(){
    int t;
    do cin >> t;
    while(t<1 && t>100);
    while(t--){
        int n;
        do cin >> n;
        while(n<1 && n>10000);
        for(int i=2; i<=n; i++){
        	int d=0;
            while(n%i==0){
                n/=i;
                d++;
            }
            if(d>=1) cout << i << " "<<d<<" ";
        }
        cout <<  endl;
    }
    return 0;
}