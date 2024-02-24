#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        int a[1000];
        for(int i=1; i<=n; i++) cin>>a[i];
        std::sort(a+1,a+n+1);
        int y=1;
        int b[1000];
        for(int i=n; i>n/2; i--){
            b[y]=a[i];
            y++;
        }
        if(n%2==0){
            for(int i=1; i<=y-1; i++) cout<<b[i]<<" "<<a[i]<<" ";
        }else{
            for(int i=1; i<=y-2; i++) cout<<b[i]<<" "<<a[i]<<" ";
            cout<<b[y-1];
        }
        cout<<endl;
    }
    return 0;
}