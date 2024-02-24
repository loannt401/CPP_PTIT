#include<iostream>
#include<cmath>

using namespace std;

bool cbcl(int x){
    int d=0;
    while(x>0){
        int n=x%10;
        if(n%2==0) d++;
        else d--;
        x/=10;
    }
    if(d!=0) return false;
    return true;
}

int main(){
    int n;
    do cin >> n;
    while(n%2!=0);
    int a = pow(10,n-1);
    int b = pow(10,n);
    int c=0;
    for(int i=a; i<b; i++){
       if(cbcl(i)==true){
           cout << i << " ";
           c++;
       } 
       if(c==10){
           cout << endl;
           c-=10;
       }
    }
    return 0;
}