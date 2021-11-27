#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z,a=0;
        cin>>x>>y>>z;
        a=(z-y)/x;
        cout<<a*x+y<<endl;
    }
    return 0;
}
