#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,cnt=1;
    scanf("%d %d",&a,&b);
    while(cnt!=0)
    {
        a=a*3;
        b=b*2;
        cnt++;
        if(a>b) {printf("%d\n",cnt-1); cnt=0;}
    }

}
