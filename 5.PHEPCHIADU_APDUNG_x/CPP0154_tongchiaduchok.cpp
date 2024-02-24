#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        long b;
        cin >> a>> b;
        int t=0;
        for(int i=1; i<=a; i++){
            t+=i%b;
        }
        if(b==t) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}