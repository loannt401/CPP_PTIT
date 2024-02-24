#include<stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    double sum =0;
    for(int i=1; i<=n; i++){
        sum = sum + (double)1/i;
    }
    printf("%.4lf",sum);
    return 0;
}