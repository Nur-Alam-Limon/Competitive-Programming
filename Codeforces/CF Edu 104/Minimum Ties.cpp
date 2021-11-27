#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0,p=0,q=0,z=0;
        cin>>n;
        x=(n*(n-1))/2;
        y=x/n;
        ll a[x+5]={0};
        ll b[n+5][n+5];
        memset(b,0,sizeof(b));
        for(ll i=0;i<y;i++)
        {
            z++;
            for(ll j=1;j<=n;j++)
            {
                p=j;
                q=j+z;
                if(q>n) {q=q-n; b[q][p]=-1;}
                else b[p][q]=1;
            }
        }
        for(ll i=1;i<n;i++)
        {
            for(ll j=i+1;j<=n;j++)
            {
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

