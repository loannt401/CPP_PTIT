#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        cin.ignore();
        string s; cin>>s;
        map<char,int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            if(mp[s[i]]==1){
                cout<<s[i];
                mp[s[i]]=0;
            }
        }
        cout<<endl;
    }
    
    return 0;
}