#include<iostream>

using namespace std;

/*
    tất cả các chữ số cạnh nhau chỉ sai khác nhau đúng một đơn vị
*/

bool slk(long long n){
    int s1, s2;
    while(n>9){
        s1=n%10;
        s2=(n/10)%10;
        if(s1==s2+1 || s1+1==s2){
            n/=10;
        } else return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(slk(n)) cout <<"YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}