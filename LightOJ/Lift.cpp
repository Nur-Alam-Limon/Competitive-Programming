#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int a,b,time=0,diff=0;
        scanf("%d %d",&a,&b);
        if(b>=a)
        {
            time=(b*4)+19;
        }
        else
        {
            diff=abs(a-b);
            time=(diff*4)+(a*4)+19;
        }
        printf("Case %d: %d\n",i+1,time);
    }
    return 0;
}
