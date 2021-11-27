#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    n%=9;
    if(n==0) n=9;
    cout<<n<<endl;
    return 0;
}
