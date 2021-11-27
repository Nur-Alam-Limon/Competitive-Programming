#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d=0;
    cin>>a>>b>>c;
    for(int i=1;i*b<=c;i++)
    {
        if(b*i>a) {cout<<b*i-a<<" "; d=1;}
    }
    if(d==0) cout<<-1<<endl;
    else cout<<endl;
    return 0;
}
