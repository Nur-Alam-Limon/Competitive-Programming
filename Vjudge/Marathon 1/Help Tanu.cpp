#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int a,b,m,s,p,q;
    scanf("%llu %llu %llu",&a,&b,&m);
    if(m>=1)
    {   p=a%m;
        q=b%m;
        s=(p+q)%m;
    printf("%llu\n",s);}
    return 0;
}

