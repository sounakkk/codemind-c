#include<stdio.h>
#include<string.h>
int main()
{
    long long int a;
    scanf("%lld", &a);
    int m=0;
    while(a>0){
        int d=a%10;
        if(d>m){
            m=d;
        }
        a/=10;
    }
    printf("%d", m);
    return 0;
}