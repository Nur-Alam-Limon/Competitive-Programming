//RUET_HobeKiHobena

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,ans=0;
    cin>>n;
    if(n<6) ans=1;
    else ans=(n/6)+1;
    cout<<ans<<endl;
    return 0;
}
