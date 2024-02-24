#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[n], b[m];
        set<int> s;
        for(int i=0; i<n; i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
            s.insert(b[i]);
        }
        for(set<int>::iterator it = s.begin(); it != s.end(); it++) cout<<*it<<" ";
        cout<<endl;
        int i=0, j=0;
        while(i<n&&j<m){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                i++; j++;
            }
            else if(a[i]>b[j]) j++;
            else i++;
        }
        cout<<endl;
    }
    return 0;
}



// CACH 2:

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n,m; cin>>n>>m;
//         int a[n], b[m];
//         set<int> s;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             s.insert(a[i]);
//         }
//         for(int i=0; i<m; i++){
//             cin>>b[i];
//             s.insert(b[i]);
//         }
//         for(set<int>::iterator it = s.begin(); it != s.end(); it++) cout<<*it<<" ";
//         cout<<endl;
//         set<int> s1(a,a+n);
//         set<int> s2(b,b+m);
//         for(set<int>::iterator it = s1.begin(); it != s1.end(); it++){
//             if(s2.find(*it)!=s2.end()) cout<<*it<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
