#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int n,s=0,r=0;
        scanf("%d",&n);
        s=n/2;
        r=n-s;
        printf("%d %d\n",s,r);
    }
}
