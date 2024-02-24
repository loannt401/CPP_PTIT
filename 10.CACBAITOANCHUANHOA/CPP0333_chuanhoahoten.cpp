#include<bits/stdc++.h>
using namespace std;

void tendem(string &a){
    transform(a.begin(),a.end(),a.begin(),::tolower);
    a[0] = toupper(a[0]);
}

int main(){
    string s; getline(cin,s);
    vector<string> x;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
        x.push_back(tmp);
    }
    for(vector<string>::iterator it=x.begin(); it!=x.end()-1; ++it){
        tendem(*it);
        cout<<*it;
        if(it != (x.end()-2)) cout<<" ";
    }
    string c = *(x.end()-1);
    transform(c.begin(),c.end(),c.begin(),::toupper);
    cout<<", "<<c;
    return 0;
}