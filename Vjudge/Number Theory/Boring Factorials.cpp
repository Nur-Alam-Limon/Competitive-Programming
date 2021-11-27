#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,sum=1;
        cin>>a>>b;
        for(int i=1;i<=a;i++)
        {
            sum=((sum%b)*(i%b))%b;
        }
        cout<<sum<<endl;
    }
    return 0;
}
