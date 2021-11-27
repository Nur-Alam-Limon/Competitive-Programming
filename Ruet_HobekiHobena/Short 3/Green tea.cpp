#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll a,b,x=0,y=0,z=1,p=0;
    cin>>a>>b;
    while(x==0 && y==0)
    {
        p=80*z;
        if(p<a) z++;
        else if((p%a)%b==0) {x=p/a; y=(p-(a*x))/b; break;}
        else z++;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}


