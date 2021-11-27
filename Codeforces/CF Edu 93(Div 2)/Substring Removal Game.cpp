#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll a[200],cnt=0,j=0,sum=0,x=0;
        x=s.size();
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='1') cnt++;
            else if(s[i]=='0' && cnt!=0) {a[j]=cnt; j++; cnt=0;}
        }
        if(cnt!=0) {a[j]=cnt; j++;}
        sort(a,a+j);
        for(ll i=j-1;i>=0;i=i-2)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

