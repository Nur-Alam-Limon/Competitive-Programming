#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=0,b=0,x=0;
    cin>>n;

    a=n/36;
    x=n-(a*36);
    b=x/3;

    if(x%3==2)
        {b++;}

    cout<<a<<" "<<b<<endl;
    return 0;
}
