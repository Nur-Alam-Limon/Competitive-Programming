//Bismillahir Rah Manir Rahim
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d,n,p=0,q=0,r=0;
        cin>>a>>b>>c>>d>>n;
        p=a;
        q=b;
        r=n;
        if(a<b)
        {
            ll x=a-c;
            if(x>=n) a=a-n;
            else {a=a-x; n=n-x; b=b-n;}
            if(a<c) a=c;
            if(b<d) b=d;
            //cout<<a<<" "<<b<<endl;
        }
        else if(a>b)
        {
            ll x=b-d;
            if(x>=n) b=b-n;
            else {b=b-x; n=n-x; a=a-n;}
            if(a<c) a=c;
            if(b<d) b=d;
            //cout<<a<<" "<<b<<endl;
        }
        else if(a==b)
        {
            ll x=b-d;
            ll y=a-c;
            if(x>=n) b=b-n;
            else if(y>=n) a=a-n;
            else {if(x>=y) {b=b-x; n=n-x; a=a-n;} else {a=a-y; n=n-y; b=b-n;}}
            if(a<c) a=c;
            if(b<d) b=d;
            //cout<<a<<" "<<b<<endl;
        }
        if(p>q)
        {
            ll x=p-c;
            if(x>=r) p=p-r;
            else {p=p-x; r=r-x; q=q-r;}
            if(p<c) p=c;
            if(q<d) q=d;
            //cout<<p<<" "<<q<<endl;
        }
        else if(p<q)
        {
            ll x=q-d;
            if(x>=r) q=q-r;
            else {q=q-x; r=r-x; p=p-r;}
            if(p<c) p=c;
            if(q<d) q=d;
            //cout<<p<<" "<<q<<endl;
        }
        else if(p==q)
        {
            ll x=q-d;
            ll y=p-c;
            if(x>=r) q=q-r;
            else if(y>=r) p=p-r;
            else {if(x>=y) {q=q-x; r=r-x; p=p-r;} else {p=p-y; r=r-y; q=q-r;}}
            if(p<c) p=c;
            if(q<d) q=d;
            //cout<<p<<" "<<q<<endl;
        }
        cout<<min(a*b,p*q)<<endl;
    }
    return 0;
}

