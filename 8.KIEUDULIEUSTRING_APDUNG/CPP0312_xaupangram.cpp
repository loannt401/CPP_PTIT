#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; getline(cin,s);
        int k; cin>>k;
        map<char,bool> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]] = true;
        }
        int cnt=0;
        for(int i='a'; i<='z'; i++){
            if(!mp[i]){
                cnt++;
            }
        }
        if(cnt<=k) cout<<1<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}