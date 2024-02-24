#include<iostream>
#include<string.h>

using namespace std;

bool sothuannghich(string s){
	int d=0;
	while(s[d]!='\0'){
		d++;
	}
    for(int i=0; i<d; i++){
        if(s[i]!=s[d-1-i]) return false; 
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(sothuannghich(s)==true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}