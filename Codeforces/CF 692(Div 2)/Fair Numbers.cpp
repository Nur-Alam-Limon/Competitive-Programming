#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,a=0;
        cin>>n;
        x=n;
        while(x>0)
        {
            a=x%10;
            x=x/10;
            if(a!=0 && n%a!=0)
            {
                x=n+1;
                n=n+1;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}

