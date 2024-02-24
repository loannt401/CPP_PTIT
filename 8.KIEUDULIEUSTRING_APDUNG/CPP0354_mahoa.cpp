#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int cnt=1;
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1]) cnt++;
            else{
                cout<<s[i-1]<<cnt;
                cnt=1;
            }
        }
        cout<<s[s.length()-1]<<cnt;
        cout<<endl;
    }
    return 0;
}