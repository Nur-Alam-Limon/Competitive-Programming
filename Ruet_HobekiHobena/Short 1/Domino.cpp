#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n,x,y,one=0,two=0,cnt=0,sum1=0,sum2=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        sum1+=x;
        sum2+=y;
        if(x%2==0 && y%2!=0) cnt++;
        else if(y%2==0 && x%2!=0) cnt++;
    }
    if(sum1%2==0 && sum2%2==0) cout<<0<<endl;
    else if(sum1%2!=0 && sum2%2==0) cout<<-1<<endl;
    else if(sum1%2==0 && sum2%2!=0) cout<<-1<<endl;
    else if(sum1%2!=0 && sum2%2!=0 && cnt>0) cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}
