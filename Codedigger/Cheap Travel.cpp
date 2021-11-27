#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*c<=d) {cout<<a*c<<endl;}
    else
    {
        cout<<(a/b)*d+min((a%b)*c,d)<<endl;
    }
    return 0;
}
