#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,q,x,cnt=1,ans=0;
    cin>>n>>q;
    ll ar[n+5];
    for(ll i=0;i<n;i++) {cin>>ar[i];}
    sort(ar,ar+n);
    queue<ll> q1,q2;
    for(ll i=n-1;i>=0;i--) {q1.push(ar[i]);}
    while(q--)
    {
        cin>>x;
        for(;cnt<=x;cnt++)
        {
            if(q1.front()>=q2.front()) {ans=q1.front(); q1.pop(); q2.push(ans/2);}
               else {ans=q2.front(); q2.pop(); q2.push(ans/2);}

        }
        cout<<ans<<endl;
    }

    return 0;
}
