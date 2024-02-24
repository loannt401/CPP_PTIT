#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int s=1;
        int d=0;
        for(int i=2;i<=n;i++){
            s*=i;
            if(s%p==0)
            while(s%p==0){
                d++;
                s/=p;
            }
            s=1;
        }
        cout<<d<<endl;
    }
    return 0;
}
