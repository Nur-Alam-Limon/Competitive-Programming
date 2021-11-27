#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a,b,c,k=1;
        cin>>a>>b>>c;
        if(b*c<a) {cout<<-1<<endl; continue;}
        if(b==1 && a>1) {cout<<-1<<endl; continue;}
        for(ll i=1;i<=a;i++)
        {
            if(k>b) k=1;
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
