#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll l=1,h=1000000,mid=0;
    while(l<h)
    {
        mid=(l+h+1)/2;
        printf("%lld\n",mid);
        fflush(stdout);

        char c[3];
        scanf("%s",c);
        if(strcmp(c,"<")==0) h=mid-1;
        else l=mid;
    }
    printf("! %lld\n",l);
    fflush(stdout);
    return 0;
}
