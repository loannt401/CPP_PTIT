#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m,n;
        int a,b;
        cin>>m>>n>>a>>b;
        int d=0;
        for(long long i=m; i<=n; i++){
            if(i%a==0 || i%b==0) d++;
        }
        cout<<d<<endl;
    }
    return 0;
}
