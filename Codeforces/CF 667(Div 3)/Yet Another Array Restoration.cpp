#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,dif=0,k=0,x=0;
        vector<ll>ar;
        cin>>n>>a>>b;
        dif=b-a;
        for(ll i=dif;i>0;i--)
        {
            if(dif%i==0 && n-1>=i)
            {
                k=i;
                break;
            }
        }
        ll d=dif/k;
        if(b%d==0) x=b/d;
        if(b%d!=0) x=(b/d)+1;
        if(x<n) {b=(n-x)*d+b;}
        for(ll i=0;i<n;i++)
        {
            ar.push_back(b);
            b=b-d;
        }
        reverse(ar.begin(),ar.end());
        for(ll i=0;i<ar.size();i++)
            cout<<ar[i]<<" ";

        cout<<endl;
    }
    return 0;
}
