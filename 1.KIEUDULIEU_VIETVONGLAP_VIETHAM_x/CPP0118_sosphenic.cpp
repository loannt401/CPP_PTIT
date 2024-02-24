#include<iostream>
using namespace std;

/* số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba số khác nhau. 
Ví dụ
    N=30 là số Sphenic vì 30 = 2×3×5;  
    N = 60 không phải số Sphenic vì 60 = 2×2×3×5.
*/

bool sphenic(int n){
    int d=0;
    for(int i=2; i<=n; i++){
        if(n%i==0 && (n/i)%i!=0){
            d++;
            n/=i;
        }
        if(n%i==0 && (n/i)%i==0) return false;
    }
    if(d==3) return true;
    return false;
}

int main(){
    int t;
    do cin >> t;
    while(t<1 && t>100);
    while(t--){
        int n;
        do cin >> n;
        while(n<1 && n>10000);
        if(sphenic(n)) cout <<1;
        else cout << 0;
        cout <<  endl;
    }
    return 0;
}