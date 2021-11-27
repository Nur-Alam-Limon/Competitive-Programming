#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,s,p,q;
    scanf("%llu",&n);
    if(n%2==0)
    {
        p=n/2;
        q=(n+1);
        s=p*q;
        printf("%llu\n",s);
    }
    else
    {
        p=n;
        q=(n+1)/2;
        s=p*q;
        printf("%llu\n",s);
    }
}

