#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,c=0;
    cin>>n;
    while(n>0)
    {
        if(n%10==4 || n%10==7) c++;
        n/=10;
    }
    if(c==7 || c==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
