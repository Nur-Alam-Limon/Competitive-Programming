#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    char k[t+2];
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
            {k[i]='>';}
        else if(a<b)
            {k[i]='<';}
        else if(a==b)
            {k[i]='=';}
    }
    for(int j=0;j<t;j++)
    {
        printf("%c\n",k[j]);
    }
}

