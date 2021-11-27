#include<bits/stdc++.h>

using namespace std;

long long int a[1000005];

int main()
{
    long long int n,q;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while(q--)
    {
        long long int x,y,sum=0;
        cin>>x>>y;
        for(int j=x;j<=y;j++)
        {
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
