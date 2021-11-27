#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf(" %d ",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,cnt=0,k;
        scanf("%lld %lld",&a,&b);
        for(k=0;k<1000000;k++)
        {
            if((a+k)<=b) {a=a+k;}
            else {b=b+k;}
            if(a-b==0) break;
            cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
