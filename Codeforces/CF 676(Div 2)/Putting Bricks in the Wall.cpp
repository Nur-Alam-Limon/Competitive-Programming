#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,z=0,y=0;
        cin>>n;
        string a[n+2];
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        if(a[0][1]==a[1][0] && a[n-2][n-1]==a[n-1][n-2] && a[n-2][n-1]==a[0][1]) {cout<<2<<endl; cout<<1<<" "<<2<<endl; cout<<2<<" "<<1<<endl; continue;}
        if(a[0][1]==a[1][0] && a[n-2][n-1]==a[n-1][n-2]) {cout<<0<<endl; continue;}
        if(a[0][1]==a[1][0] && a[n-2][n-1]!=a[n-1][n-2])
        {
            cout<<1<<endl;
            if(a[n-2][n-1]==a[0][1]) cout<<n-1<<" "<<n<<endl;
            else cout<<n<<" "<<n-1<<endl;
            continue;
        }
        if(a[0][1]!=a[1][0] && a[n-2][n-1]==a[n-1][n-2])
        {
            cout<<1<<endl;
            if(a[n-2][n-1]==a[0][1]) cout<<1<<" "<<2<<endl;
            else cout<<2<<" "<<1<<endl;
            continue;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            if(a[1][0]==a[n-2][n-1]) cout<<n-1<<" "<<n<<endl;
            else cout<<n<<" "<<n-1<<endl;
            continue;
        }

    }
    return 0;
}


