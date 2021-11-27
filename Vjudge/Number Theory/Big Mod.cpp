#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c;
    while(cin>>a,cin>>b,cin>>c)
    {
        long long int sum=1;
        while(b>0)
        {
            if(b%2==1) sum=(sum*a)%c;
            a=(a*a)%c;
            b=b/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
