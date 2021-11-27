#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,count=0,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        int c,a,b;
        count=0;
        cin>>c;
        for(a=1;a<c;a++)
        {
            for(b=1;b<c;b++)
            {if((a*a+b*b)==(c*c))
                count++;}
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
    return 0;
}
