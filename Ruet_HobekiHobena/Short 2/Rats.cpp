#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    double x,y,z;
    double ans=0;
    cin>>x>>y>>z;
    x++;
    y++;
    z++;
    ans=(x*2)/(z*2);
    ans=(ans*y)-1;
    cout<<(ll)ans<<endl;
    return 0;
}


