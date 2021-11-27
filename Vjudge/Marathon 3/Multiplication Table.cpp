#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,x=0,y=0,cnt=0;
    scanf("%lld %lld",&a,&b);

    for(int i=1;i<=a;i++)
    {
        if(b%i==0 && b/i<=a) cnt++;
    }
    printf("%lld\n",cnt);

}
