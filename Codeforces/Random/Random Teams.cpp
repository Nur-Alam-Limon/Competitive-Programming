#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,m,mi=0,mx=0,x=0,y=0,z=0;
    cin>>n>>m;
    x=n/m;
    y=n%m;
    mi=((x*(x+1))/2)*y + ((x*(x-1))/2)*(m-y);
    z=m-1;
    z=n-z;
    mx=(z*(z-1))/2;
    cout<<mi<<" "<<mx<<endl;
    return 0;
}
