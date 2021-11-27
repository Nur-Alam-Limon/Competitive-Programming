#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c,d=0,x=0,y=0;
        cin>>a>>b>>c;
        long long int ar[c+5];
        for(int i=0;i<c;i++)
        {
            cin>>ar[i];
        }
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<c;k++)
            {
                 if(ar[k]==(b+x)) {x++; d++;}
                 else if(ar[k]==(b-x)) {x++;}
            }
            if(d==0) break;
        }

        cout<<x<<endl;
    }
    return 0;
}
