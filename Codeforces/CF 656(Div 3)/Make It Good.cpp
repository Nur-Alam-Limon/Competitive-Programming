#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n+5];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1]) break;
        }
        for(;i>0;i--)
        {
            if(a[i]<a[i-1]) break;
        }
        cout<<i<<endl;
    }
    return 0;
}
