#include<bits/stdc++.h>

using namespace std;

long long int a[100005],x[100005];

int main()
{
    long long int n,cnt=1,y=0,s;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j+1]>=a[j])
            cnt++;
        if(a[j+1]<a[j])
        {
            x[j]=cnt;
            cnt=1;
        }
    }
    s=cnt;
    for(int k=0;k<n;k++)
    {
        if(x[k]>s)
        {
            s=x[k];
        }
    }
    printf("%lld\n",s);
}
