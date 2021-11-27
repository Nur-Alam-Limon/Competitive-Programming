#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,c,m=0;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>=b && a>=c)
        {
            if(b+c+1>=a) printf("Yes\n");
            else printf("No\n");
        }
        else if(b>=a && b>=c)
        {
            if(a+c+1>=b) printf("Yes\n");
            else printf("No\n");
        }
        else
        {
            if(b+a+1>=c) printf("Yes\n");
            else printf("No\n");
        }

    }
    return 0;
}
