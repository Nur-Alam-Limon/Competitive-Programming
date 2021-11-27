#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,d,a=0,b=0,c=0;
        cin>>n>>d;
        if(d<=n) cout<<"YES"<<endl;
        else
        {
            if(n%2==0) a=(n/2)-1;
            else a=n/2;
            if(d%(a+1)==0) {b=(d/(a+1));}
            else b=(d/(a+1))+1;
            c=b+a;
            if(c<=n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
