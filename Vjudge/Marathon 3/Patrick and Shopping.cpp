#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n1,n2,n3,m[10],n=0;
    scanf("%lld %lld %lld",&n1,&n2,&n3);
    m[0]=((2*n1)+(2*n2));
    m[1]=((2*n1)+(2*n3));
    m[2]=((2*n2)+(2*n3));
    m[3]=n1+n2+n3;
    n=m[0];
    for(int i=1;i<4;i++)
    {
        if(m[i]<n) n=m[i];
    }
    printf("%lld\n",n);
    return 0;
}
