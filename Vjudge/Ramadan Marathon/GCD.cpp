#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
   int n;
   while(cin>>n)
    {
        if(n==0) return 0;
        long long int g=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                g=__gcd(i,j)+g;
            }
        }
        cout<<g<<endl;
    }
    return 0;
}
