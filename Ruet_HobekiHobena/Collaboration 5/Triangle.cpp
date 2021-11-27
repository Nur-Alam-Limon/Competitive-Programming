#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c1,l,r,d,b,c,x=0;
        double ans1=0,s=0,ans=0;
        cin>>n>>c1;
        vector<ll>a;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        if(n<3) {cout<<-1<<endl; continue;}
        else if(a[n-3]+a[n-2]<=a[n-1]) {cout<<-1<<endl; continue;}
        for(ll i=0;i<n-2;i++)
        {
            if(a[i]+a[n-2]>a[n-1]) {d=a[i]; l=i; break;}
        }
        l=l+1;
        r=n-1;
        while(l<r)
        {
            if(a[l]+d<=a[r]) l++;
            else if(a[l]+d>a[r]) {b=a[l]; break;}
        }
        l=0;
        r=n-1;
        c=a[r];
        while(l<r)
        {
            if(d+b>a[r]) r--;
            else if(d+b<=a[r]) {c=a[r+1]; break;}
        }
        s=d+b+c;
        s=s/2;
        ans=s*(s-d)*(s-b)*(s-c);
        ans1=sqrt(ans);
        cout<<fixed<<setprecision(15)<<ans1<<endl;
    }
    return 0;
}
