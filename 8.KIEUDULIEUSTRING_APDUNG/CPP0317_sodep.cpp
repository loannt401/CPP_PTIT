#include<bits/stdc++.h>
using namespace std;

int sochan(string a, int n){
    for(int i=0; i<n; i++){
        if(a[i]%2==1) return 0;
    }
    return 1;
}

int sothuannghich(string a, int n){
    int l=0, r=n-1;
    while(l<r){
        if(a[l]!=a[r]) return 0;
        else{
            ++l; --r;
        }
    }
    return 1;
}

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        cin.ignore();
        string s; cin>>s;
        if(sochan(s,s.length()) && sothuannghich(s,s.length())) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}