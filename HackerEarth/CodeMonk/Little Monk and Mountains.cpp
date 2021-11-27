#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int a[n+5],b[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    while(q--)
    {
        long long int x;
        cin>>x;
        for(int j=0;j<n;j++)
        {
            if(x>=a[j] && x<=b[j]) cout<<a[j]-x<<endl;
        }

    }
    return 0;
}
