#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        double ox,oy,ax,ay,bx,by;
        double d=0,p=0,r=0,ans=0;
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        d=abs(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        d=sqrt(d);
        r=abs(((bx-ox)*(bx-ox))+((by-oy)*(by-oy)));
        r=sqrt(r);
        p=acos(((2*r*r)-d*d)/(2*r*r));
        ans=r*p;
        printf("Case %d: %.10lf\n",i+1,ans);
    }
    return 0;
}
