#include<bits/stdc++.h>

using namespace std;

string x[1000000];

int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,ans=0,p=0,q=0,r=0;
        cin>>n;
        if(n%2==0)
        {
            p=n/2;
            for(int i=0;i<p;i++)
            {
                x[i]='1';
                q++;
            }

        }
        else if(n%2!=0)
        {
            x[0]='7';
            q++;
            n=n-3;
            p=n/2;
            for(int i=1;i<=p;i++)
            {
                x[i]='1';
                q++;
            }

        }
        for(int j=0;j<q;j++)
        {cout<<x[j];}
        cout<<endl;
    }
    return 0;
}
