#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define pi acos(-1.0)
#define MAX 300005

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll x, y, z;
        cin>>x>>y>>z;
        ll mul=x*y*z;
        ll sum=mul/x+mul/y+mul/z;
        cout<<(mul)/sum<<endl;
    }

    return 0;
}
