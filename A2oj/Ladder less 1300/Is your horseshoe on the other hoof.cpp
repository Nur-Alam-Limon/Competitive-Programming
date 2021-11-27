#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,c,d,cnt=0;
    cin>>a>>b>>c>>d;
    map<ll,ll>x;
    x[a]++;
    x[b]++;
    x[c]++;
    x[d]++;
    if(x[a]>1) {cnt++; x[a]--;}
    if(x[b]>1) {cnt++; x[b]--;}
    if(x[c]>1) {cnt++; x[c]--;}
    if(x[d]>1) {cnt++; x[d]--;}
    cout<<cnt<<endl;
    return 0;
}
