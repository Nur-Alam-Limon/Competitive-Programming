#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int x,p=0,q=0;
    cin>>x;
    for(long long int i=sqrt(x);i>0;i--)
    {
        if(x%i==0 && x%(x/i)==0)
        {

            p=__gcd(i,(x/i));
            q=(i*(x/i))/p;
            if(q==x)
            {
                cout<<i<<" "<<x/i<<endl;
                break;
            }
        }
    }
    return 0;
}
