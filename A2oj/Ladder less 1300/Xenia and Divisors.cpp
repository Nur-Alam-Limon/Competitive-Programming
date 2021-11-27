#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,z=0,x=0,k=0;
    cin>>n;
    x=n/3;
    ll b[n+3],a[10]={0};
    ll c[x+3][5];
    for(ll i=0;i<n;i++) {cin>>b[i]; a[b[i]]++; if(b[i]==7 || b[i]==5) z=1;}
    for(ll i=0;i<8;i++)
    {
        if(a[i]>x) {z=1; break;}
    }
    if(z) {cout<<-1<<endl; return 0;}
    while(x--)
    {
        if(a[6]>0 && a[3]>0 && a[1]>0) {c[k][0]=1; c[k][1]=3; c[k][2]=6; a[6]--; a[3]--; a[1]--;}
        else if(a[6]>0 && a[2]>0 && a[1]>0) {c[k][0]=1; c[k][1]=2; c[k][2]=6; a[6]--; a[2]--; a[1]--;}
        else if(a[4]>0 && a[2]>0 && a[1]>0) {c[k][0]=1; c[k][1]=2; c[k][2]=4; a[4]--; a[2]--; a[1]--;}
        else z=1;
        k++;
    }
    if(z) {cout<<-1<<endl; return 0;}
    for(ll i=0;i<k;i++){
        for(ll j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
    cout<<endl;}
    return 0;
}
