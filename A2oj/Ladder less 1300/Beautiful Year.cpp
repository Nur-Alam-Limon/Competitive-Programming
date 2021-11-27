#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    for(n=n+1;n<10000;n++)
    {
        e=n;
        a=e%10;
        e/=10;
        b=e%10;
        e/=10;
        c=e%10;
        e/=10;
        d=e%10;
        e/=10;
        if(a==b || a==c || a==d || b==c || b==d || c==d) continue;
        else {cout<<n<<endl; break;}
    }
    return 0;
}
