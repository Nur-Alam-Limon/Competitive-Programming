#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,a,b,c,d,flag=0;
    cin>>n;
    ll x[11][11];
    for(ll i=0;i<11;i++){
    for(ll j=0;j<11;j++){x[i][j]=0;}}

    for(ll i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(a==0)
        {
            if(b+d-1>10) {flag=1; break;}
            for(ll j=d;j<b+d;j++)
            {
                if(x[c][j]==1) flag=1;
                x[c][j]=1;
            }
        }
        else
        {
            if(c+b-1>10) {flag=1; break;}
            for(ll j=c;j<c+b;j++)
            {
                if(x[j][d]==1) flag=1;
                x[j][d]=1;
            }
        }
    }
    if(flag) cout<<"N"<<endl;
    else cout<<"Y"<<endl;
    return 0;
}
