#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,y,cnt=0,tmp,ll,ul;
    scanf("%lld %lld",&x,&y);
    if(x<=y)
     {printf("Not possible\n");}
     ll=y;ul=x;
     d=(ul+ll)/2;
    for(int j=0;j<tmp;j++)
    {
        double z=0;
        z=(double)x/(double)y;
        if(abs(z-1.666667)<=0.000001)
        {
            printf("%lld %lld\n",x,y);
            cnt++;
            break;
        }
        x=x-1;
        y=y-1;
    }
    if(cnt==0)
    {printf("Not possible\n");}
    return 0;
}
