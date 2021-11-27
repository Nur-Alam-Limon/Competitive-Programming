#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if((n & (n-1)) ==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
