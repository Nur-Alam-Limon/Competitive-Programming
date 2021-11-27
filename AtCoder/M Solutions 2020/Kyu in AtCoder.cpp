#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a;
    cin>>a;
    if(a<=599) cout<<8<<endl;
    else if(a<=799) cout<<7<<endl;
    else if(a<=999) cout<<6<<endl;
    else if(a<=1199) cout<<5<<endl;
    else if(a<=1399) cout<<4<<endl;
    else if(a<=1599) cout<<3<<endl;
    else if(a<=1799) cout<<2<<endl;
    else if(a<=1999) cout<<1<<endl;
    return 0;
}
