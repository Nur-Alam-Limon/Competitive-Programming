#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int N,a[1010],r=0;
        scanf("%d",&N);
        for(int j=0;j<N;j++)
        {
            int p=0;
            scanf("%d",&p);
            if(p>=0)
                {a[j]=p;}
            else a[j]=0;
        }
        for(int k=0;k<N;k++)
        {
            r=r+a[k];
        }
        printf("Case %d: %d\n",i+1,r);
    }
    return 0;
}
