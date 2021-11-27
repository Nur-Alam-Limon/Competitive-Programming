#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        int a,b,ans=0;
        scanf("%d %d",&a,&b);
        ans=1440-((a*60)+b);
        printf("%d\n",ans);
    }
    return 0;
}
