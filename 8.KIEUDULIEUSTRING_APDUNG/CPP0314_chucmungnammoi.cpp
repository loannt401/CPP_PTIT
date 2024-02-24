#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    set<string> v;
    for(int i=0; i<n; i++){
        string x;
        getline(cin,x);
        v.insert(x);
    }
    cout<<v.size()<<endl;
    return 0;
}
