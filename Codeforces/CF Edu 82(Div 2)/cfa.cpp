#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<ll> b(n), ans;
    for(int i=0;i<n;i++) cin >> b[i];

    ll tot=0;
    for(int i=0;i<n;i++)
    {
        vector<ll> a=b;

        ll cur= a[i];
        for(int j=i-1;j>=0;j--)
        {
            cur=a[j]=min(cur,a[j]);
        }

        cur=a[i];
        for(int j=i+1;j<n;j++)
        {
            cur=a[j]=min(cur,a[j]);
        }

        ll sum = accumulate(a.begin(),a.end(),0);

        if(sum>tot)
        {
            ans = a;
            tot=sum;
        }
    }

    for(ll p : ans) cout << p << ' ';

    return 0;
}

