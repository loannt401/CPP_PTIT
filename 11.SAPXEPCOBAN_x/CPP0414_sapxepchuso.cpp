#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char a[16];
        bool b[10]={0};
        for(int i=0; i<n; i++){
            cin>>a;
            for(int j=0; j<strlen(a); j++){
                if(b[a[j]-'0']==0) b[a[j]-'0']=1;
            }
        }
        for(int i=0; i<10; i++){
            if(b[i]==1) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}