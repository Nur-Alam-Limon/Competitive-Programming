#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        double p,q,r,a=0,b=0,c=0,s=0,area=0,ans=0,x=0,y=0,z=0,x1=0;
        scanf("%lf %lf %lf",&p,&q,&r);
        a = p+q;
        b = q+r;
        c = r+p;
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        x = acos((a*a+b*b-c*c)/(2*a*b));
        y = acos((a*a+c*c-b*b)/(2*a*c));
        z = acos((c*c+b*b-a*a)/(2*c*b));
        x1=(0.5)*(x*q*q+y*p*p+z*r*r);
        ans=area-x1;
        printf("Case %d: %.10lf\n",i+1,ans);
    }
    return 0;
}
