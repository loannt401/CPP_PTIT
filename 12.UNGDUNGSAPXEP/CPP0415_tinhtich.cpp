#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long a[n],b[m];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        long long max=a[0], min=b[0];
        for(int i=1; i<n; i++) if(max<a[i]) max=a[i];
        for(int i=1; i<n; i++) if(min>b[i]) min=b[i];
        cout<<max*min<<endl;
    }
    return 0;
}