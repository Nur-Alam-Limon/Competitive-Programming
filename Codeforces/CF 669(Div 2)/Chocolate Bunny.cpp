#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n+5];
    if(n==1) {printf("! 1\n"); fflush(stdout); return 0;}
    ll x=1,y=n,p=0,q=0;
    while(x!=y)
    {
        printf("? %lld %lld\n",x,y);
        fflush(stdout);

        scanf("%lld",&p);
        if(p==-1) return 0;

        printf("? %lld %lld\n",y,x);
        fflush(stdout);

        scanf("%lld",&q);
        if(q==-1) return 0;

        if(p>q) {a[x-1]=p; x++;}
        if(p<q) {a[y-1]=q; y--;}
        if(x==y) a[x-1]=n;
    }
    printf("!");
    for(ll i=0;i<n;i++) {printf(" %lld",a[i]); fflush(stdout);}
    printf("\n");
    fflush(stdout);
    return 0;
}
