#include<bits/stdc++.h>
using namespace std;

// Dấu hiệu chia hết cho 11: 
// Tổng các chữ số hàng lẻ – Tổng các chữ số hàng chẵn 
// hoặc ngược lại chia hết cho 11

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int sum_le =0, sum_chan=0;
        for(int i=0; i<s.length(); i++){
            int n = (int)(s[i]-'0');
            if(i%2==0) sum_chan+=n;
            else sum_le+=n;
        }
        if(abs(sum_le - sum_chan)%11==0) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    return 0;
}