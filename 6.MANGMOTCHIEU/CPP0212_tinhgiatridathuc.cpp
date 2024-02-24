#include<iostream>
using namespace std;
#define modulo 1000000007

/*
    Tính toán giá trị đa thức 
    P(n, x) = an-1x^n-1 + an-2x^n-2 +..+ a0. 
    Kết quả có thể rất lớn nên hãy chia dư cho 1e9 + 7
*/

int main(){
    int t; cin>>t;
    while(t--){
        long long n,x; cin>>n>>x;
        long long a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        long long tongdathuc=0;
        for(int i=0; i<n; i++){
            long long s=1;
            for(int j=0; j<n-i-1; j++){
                s=(s*x) % modulo;
            }
            tongdathuc += a[i]*s;
        }
        if(tongdathuc>modulo) tongdathuc %= modulo;   
        cout<<tongdathuc<<endl;
    }
    return 0;
}



