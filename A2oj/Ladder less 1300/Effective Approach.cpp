#include<bits/stdc++.h>

using namespace std;

long long int a[1000000],ar[1000000],b[1000000];

int main()
{
    long long int n,q,v=0,p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ar[a[i]]=i;
    }
    cin>>q;
    for(int k=0;k<q;k++)
    {
        cin>>b[k];
    }
    for(int j=0;j<q;j++)
        {
            v+=ar[b[j]]+1;
            p+=n-ar[b[j]];
        }
    cout<<v<<" "<<p<<endl;
    return 0;
}
