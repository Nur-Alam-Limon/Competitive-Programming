#include <bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    long long int L,R,i,odd=0,even=0,p=0;
    cin>>L>>R;
    for(i=L;i<=R;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
    }
    p=even-odd;
    cout<<std::abs (p)<<endl;

    return 0;
}
