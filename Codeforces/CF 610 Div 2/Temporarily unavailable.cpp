#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    scanf("%lld",&T);
    for(int i=0;i<T;i++)
    {
        long long int a,b,c,d,e=0,f=0,g=0,h=0;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if(a<=b) {e=a; f=b;}
        else {e=b; f=a;}
        g=c-d;
        h=c+d;
        if(e>=g && f<=h) {printf("0\n"); continue;}
        else if(e<=g && f>=h) {printf("%lld\n",g-e+f-h); continue;}
        else if(g<=f && h>=f) {printf("%lld\n",g-e); continue;}
        else if(e>=g && e>=h) {printf("%lld\n",f-e); continue;}
        else if(e>=g && f>=h) {printf("%lld\n",f-h); continue;}
        else if(f<=g && f<=h) {printf("%lld\n",f-e); continue;}
    }
}
