#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<string>a(9);
        ll p=0;
        for(ll i=0;i<9;i++)
            for(ll j=0;j<9;j++)
            {
                cin>>a[i][j];
            }
        for(ll k=0;k<3;k++)
        {
        for(ll z=k;z<9;z=z+3)
        {
            char x,y;
            if(p%3==0) {x=a[p+1][z]; y=a[p+2][z];}
            else if(p%3==1) {x=a[p+1][z]; y=a[p-1][z];}
            else if(p%3==2) {x=a[p-1][z]; y=a[p-2][z];}
            for(ll j=0;j<9;j++)
            {
                if(a[p][j]==x) {a[p][z]=x; break;}
                else if(a[p][j]==y) {a[p][z]=y; break;}
            }
            p++;
        }
        }
        for(ll i=0;i<9;i++)
        {
            for(ll j=0;j<9;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
