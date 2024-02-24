#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long a,b,c[n+m];
        long long y=0;
        for(int i=0; i<n; i++){
            cin>>a;
            c[y]=a;
            y++;
        }
        for(int i=0; i<m; i++){
            cin>>b;
            c[y]=b;
            y++;
        }
        sort(c,c+y);
        for(int i=0; i<y; i++) cout<<c[i]<<" ";
        cout<<endl;
    }
    return 0;
}