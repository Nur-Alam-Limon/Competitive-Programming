#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int a,b,c;
        long long int result=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c)
        {
            if(a*a==(b*b)+(c*c))
                printf("Case %d: yes\n",i+1);
            else printf("Case %d: no\n",i+1);
        }
        else if(c>b && c>a)
        {
            if(c*c==(b*b)+(a*a))
                printf("Case %d: yes\n",i+1);
            else printf("Case %d: no\n",i+1);
        }
        else
        {
            if(b*b==(a*a)+(c*c))
                printf("Case %d: yes\n",i+1);
            else printf("Case %d: no\n",i+1);
        }
    }
    return 0;
}
