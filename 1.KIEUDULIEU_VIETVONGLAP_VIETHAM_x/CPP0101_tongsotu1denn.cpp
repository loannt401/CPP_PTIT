#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>10) cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum;
        sum = (n+1)*(long double)n/2;
        cout << sum << endl;
    }
    return 0;
}