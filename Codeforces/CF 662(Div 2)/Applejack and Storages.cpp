#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a1[100005];

int main()
{
    ll q,n,cnt=0,cnt1=0,cnt2=0;
    cin>>n;
    ll ar[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
        a1[ar[i]]++;
        if(a1[ar[i]]%2==0) cnt++;
        if(a1[ar[i]]%4==0) cnt1++;
    }
    cin>>q;
    while(q--)
    {
        char c;
        int x;
        cin>>c>>x;
        if(c=='+')
        {
            a1[x]++;
            n++;
            if(a1[x]%2==0) cnt++;
            if(a1[x]%4==0) cnt1++;
        }
        else if(c=='-')
        {
            n--;
            if(a1[x]%2==0) cnt--;
            if(a1[x]%4==0) cnt1--;
            a1[x]--;
        }
        if(n<8) cout<<"NO"<<endl;
        else if(cnt1>=2) cout<<"YES"<<endl;
        else if(cnt1==1 && (cnt-2*cnt1)>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

