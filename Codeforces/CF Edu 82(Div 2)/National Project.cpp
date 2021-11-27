#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,g,b,x=0,y=0;
        cin>>n>>g>>b;
        if(n<=g) cout<<n<<endl;
        else
        {
            y=n/2;
            x=y/g;
            cout<<x+n-y<<endl;
        }
    }
    return 0;
}
