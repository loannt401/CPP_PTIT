#include<iostream>

using namespace std;

long long giaithua(int n)
{
    if(n==1) return 1;
    return (long long)n*giaithua(n-1);
}

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum+= giaithua(i);
    }
    cout << sum;
    return 0;
}