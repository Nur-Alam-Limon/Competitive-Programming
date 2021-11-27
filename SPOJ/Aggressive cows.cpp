#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,sum=0,x=0,y=0,cnt=1,pos=0;
        cin>>a>>b;
        ll ar[a+5];
        for(ll i=0;i<a;i++) {cin>>ar[i];}
        sort(ar,ar+a);
        ll low=0,high=100000000,mid=0;
        while(high>=low)
        {
            mid=(low+high)/2;
            x=ar[0];
            cnt=1;
            for(ll i=1;i<a;i++)
            {
                if((ar[i]-x)>=mid) {cnt++; x=ar[i];}
            }
            if(cnt>=b) {pos=mid; low=mid+1;}
            else {high=mid-1;}
        }
        cout<<pos<<endl;
    }
    return 0;
}
