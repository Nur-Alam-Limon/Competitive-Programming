#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c=0,cnt=0,d=0;
    cin>>a>>b;
    c=min(a,b);
    d=max(a,b);
    if(c==1 && d==1) {cout<<0<<endl; return 0;}
    while(c>=1 && d>=1)
    {
        if(c<=d) {c=c+1; d=d-2;}
        else {d=d+1; c=c-2;}
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
