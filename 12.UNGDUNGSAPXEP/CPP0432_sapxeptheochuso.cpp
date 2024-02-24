#include<bits/stdc++.h>
using namespace std;

int check(string a, string b){
    return (a+b)<(b+a);
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> v;
        for(int i=0; i<n; i++){
            string x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(),check);
        for(vector<string>::iterator it=v.end()-1; it>=v.begin(); it--){
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}