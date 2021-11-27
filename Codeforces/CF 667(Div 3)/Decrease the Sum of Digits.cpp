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
        ll n,s,nd=0,sd=0,p=0,k=0;
        ll d[1000];
        cin>>n>>s;
        p=n;
        while(n!=0)
        {
            sd+=(n%10);
            d[k]=n%10;
            k++;
            n=n/10;
            nd++;
        }
        if(sd<=s) {cout<<0<<endl; continue;}
        if(nd==1) {cout<<10-p<<endl; continue;}
        if(d[k-1]>=s) {ll z=pow(10,nd)+0.5; cout<<z-p<<endl; continue;}
        else
        {
            ll z=0,xy=0;
            while(z<s)
            {
                if(z+d[k-1]>=s) break;
                z+=d[k-1];
                xy=xy*10+d[k-1];
                k--;
                nd--;
            }
            xy++;
            ll yz=pow(10,nd)+0.5;
            cout<<xy*yz-p<<endl;
        }
    }
    return 0;
}
