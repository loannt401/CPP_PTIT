#include<iostream>
using namespace std;
typedef unsigned long long int ull;
int main(){
    int t;
    cin>>t;
    while(t--){
        ull x,y,p;
        cin>>x>>y>>p;
        int k=1;
        for(int i=0; i<y; i++){
            k=(k*x)%p;
        }
        k%=p;
        cout<<k<<endl;
    }
    return 0;
}