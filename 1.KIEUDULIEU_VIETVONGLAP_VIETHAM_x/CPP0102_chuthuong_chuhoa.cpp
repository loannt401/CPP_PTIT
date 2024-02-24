#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        cin >> c;
        if(c>='A' &&  c<='Z') cout << (char)(c+32)<< endl;
        if(c>= 'a' && c<='z') cout << (char)(c-32) << endl; 
    }
    return 0;
}
