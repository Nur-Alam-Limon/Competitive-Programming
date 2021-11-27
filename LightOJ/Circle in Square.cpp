#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        double r,area=0;
        scanf("%lf",&r);
        area=((2*r*2*r)-(3.141592653589793238*r*r))+.000000001;
        printf("Case %d: %.2lf\n",i+1,area);
    }
}
