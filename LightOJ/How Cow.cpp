#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int x1,y1,x2,y2,M;
        int x[10003],y[10003];
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&M);
        for(int j=0;j<M;j++)
        {
            scanf("%d %d",&x[j],&y[j]);
        }
        printf("Case %d:\n",i+1);
        for(int k=0;k<M;k++)
        {
            if(x[k]>=x1 && x[k]<=x2 && y[k]>=y1 && y[k]<=y2)
                printf("Yes\n");
            else printf("No\n");

        }
    }
    return 0;
}
