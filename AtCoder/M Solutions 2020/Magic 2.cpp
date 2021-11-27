#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c;
    cin>>d;
    while(b<=a)
    {
        if(d==0) break;
        b=b*2;
        d--;
    }
    while(c<=b)
    {
        if(d==0) break;
        c=c*2;
        d--;
    }
    if(a>=b || b>=c) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}
