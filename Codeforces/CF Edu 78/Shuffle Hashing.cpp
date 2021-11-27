#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf(" %d ",&T);
    for(int i=0;i<T;i++)
    {
        string p,h;
        int x=0,y=0,z=0,cnt=0,a=0,q=0;
        cin>>p;
        cin>>h;
        x=p.size();
        y=h.size();
        if(y<x) {printf("NO\n"); continue;}
        for(int j=0;j<y;j++)
        {
            if(cnt==1) break;
            for(int k=0;k<x;k++)
            {
                if(h[j]==p[k])
                    {
                        z=k;
                        cnt++;
                        break;
                    }
            }
        }
        printf("%d\n",z);
        for(int m=z;m<=z+x;m++)
        {
            for(int n=0;n<x;n++)
            {
                if(p[n]==h[m]) {a++;}
            }
        }
        if(a==x) {printf("YES\n");}
        else printf("NO\n");

    }
}
