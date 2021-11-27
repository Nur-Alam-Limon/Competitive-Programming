#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,maxm=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(c>=d) maxm=c;
    else maxm=d;

    if(maxm>c*2) {printf("-1\n");}
    else if(maxm>d*2) {printf("-1\n");}
    else if(b<=maxm) {printf("-1\n");}
    else
    {
        if(b<=maxm*2)
        {
            b=b+((maxm*2)-b)+1;
        }
        if(a<=maxm*2)
        {
            a=a+((maxm*2)-a)+1;
        }
        if(a==b) {a=a+1;}
        if(b==maxm) {b=b+1;}
            printf("%d\n",a);
            printf("%d\n",b);
            printf("%d\n",maxm);
    }
    return 0;
}
