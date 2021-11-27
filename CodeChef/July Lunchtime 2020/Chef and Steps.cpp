#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long long int ar[a+5];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }
        for(int j=0;j<a;j++)
        {
            if(ar[j]%b==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
