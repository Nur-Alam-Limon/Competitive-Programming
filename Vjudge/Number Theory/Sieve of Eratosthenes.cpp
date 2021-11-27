#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[10005]={0};
        for(int i=2;i*i<n;i++)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j-1]=1;
            }
        }
        for(int k=0;k<n;k++)
        {
            if(a[k]==0) cout<<k+1<<endl;
        }
        cout<<endl;
    }
    return 0;
}
