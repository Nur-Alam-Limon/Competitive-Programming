#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int a[55],b[55],c[55],d[55],e[55],f[55],g[55],r[55],ans=0,x=0;
    string s[55];
    scanf(" %d ",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        scanf(" %lld %lld %lld %lld %lld %lld %lld",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i],&g[i]);
    }
    for(int j=0;j<n;j++)
    {
        r[j]=((a[j]*100)-(b[j]*50)+(c[j]+d[j]+e[j]+f[j]+g[j]));
    }
    ans=r[0];
    for(int k=1;k<n;k++)
    {
        if(r[k]>ans) {ans=r[k];}
        x++;
    }
    cout<<s[x]<<endl;
    return 0;
}
