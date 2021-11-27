#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        if(b%a!=0) printf("-1\n");
        else
        {
            printf("%lld %lld\n",a,b);
        }
    }
    return 0;
}
