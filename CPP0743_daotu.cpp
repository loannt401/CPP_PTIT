#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        vector<string> x;
        stringstream ss(s);
        string tmp;
        while(ss>>tmp){
            x.push_back(tmp);
        }
        for(vector<string>::iterator it=x.end()-1; it>=x.begin(); --it){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}