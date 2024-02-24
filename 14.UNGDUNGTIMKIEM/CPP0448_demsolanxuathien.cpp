#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a;
        int d=0;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a==k) d++;
        }
        if(d>0) cout<<d<<endl;
        else cout<<-1<<endl;
    }
    return 0; 
}