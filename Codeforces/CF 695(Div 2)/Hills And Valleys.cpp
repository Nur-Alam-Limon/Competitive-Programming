#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,mx=0,x=0,y=0,z=1,p=0,i=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n-1;i++)
        {
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1])) {cnt++; mx=max(mx,cnt);}
            else cnt=0;
        }
        cnt=0;
        for(i=1;i<n-1;i++)
        {
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1])) cnt++;
            else cnt=0;
            if(cnt==mx && cnt!=0)
            {
                z=i-mx+1;
                x=i;

                y=x-z;
                y=y/2;
                y=z+y;
                a[y]=a[y-1];
                break;
            }
        }
        cnt=0,p=0;
        for(ll i=1;i<n-1;i++)
        {
            if((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1])) {cnt++; p=max(p,cnt);}
            else cnt=0;
        }
        cout<<p<<endl;
    }
    return 0;
}

