#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0; i<n; i++) cin>>a[i];
        std::sort(a,a+n);
        int check=1;
        if(check==1){
            for(long long i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                cout<<a[i]<<" "<<a[i+1]<<endl;
                check=0;
                break;
            }
        }
        }
        
        if(check==1) cout<<-1<<endl;
    }
    return 0;
}