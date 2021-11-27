#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,x=0,y=0,z=0;
        scanf("%lld %lld",&a,&b);
        if(a%b==0) {printf("%lld\n",a); continue;}
        else if(b>a) {printf("0\n"); continue;}
        x=((a/b)*b);
        y=(b/2);
        z=(x+y);
        if(a<z) {printf("%lld\n",x);}
        printf("%lld\n",z);
    }
    return 0;
}
