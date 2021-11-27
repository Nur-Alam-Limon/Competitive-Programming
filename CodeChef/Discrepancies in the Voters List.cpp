#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a1,a2,a3,x=0,sum=0;
    cin>>a1>>a2>>a3;
    sum=a1+a2+a3;
    ll b1[sum+5],b2[50008];
    for(ll i=0;i<sum;i++)
    {
        cin>>b1[i];
    }
    sort(b1,b1+sum);
    for(ll i=1;i<a1+a2+a3;i++)
    {
        if(b1[i]==b1[i-1]) {b2[x]=b1[i]; x++; i++;}
    }
    cout<<x<<endl;
    for(ll i=0;i<x;i++) cout<<b2[i]<<endl;
    return 0;
}


