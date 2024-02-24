#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; getline(cin,s);
        stringstream ss(s);
        string tmp;
        int cnt=0;
        while(ss>>tmp){
            cnt++;
        }
        cout<<cnt;
        cout<<endl;
    }
    
    return 0;
}