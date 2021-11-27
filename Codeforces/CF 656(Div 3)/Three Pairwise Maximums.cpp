#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z,m=0,n=0;
        cin>>x>>y>>z;
        if(x>=y && x>=z) m=x;
        else if(y>=x && y>=z) m=y;
        else m=z;

        if(x<=y && x<=z) n=x;
        else if(y<=x && y<=z) n=y;
        else n=z;

        if(x!=y && x!=z && y!=z) {cout<<"NO"<<endl; continue;}

        if(x==y && x<m) {cout<<"NO"<<endl; continue;}
        else if(z==y && y<m) {cout<<"NO"<<endl; continue;}
        else if(x==z && x<m) {cout<<"NO"<<endl; continue;}

        cout<<"YES"<<endl;
        cout<<m<<" "<<n<<" "<<n<<endl;
    }
    return 0;
}
