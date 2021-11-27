#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int a,b,s=0;
        scanf("%d %d",&a,&b);
        s=a+b;
        printf("Case %d: %d\n",i+1,s);
    }
}
