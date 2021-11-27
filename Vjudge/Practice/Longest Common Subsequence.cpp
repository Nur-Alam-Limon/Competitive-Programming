#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        getline(cin,s2);
        ll l1,l2;
        l1=s1.size();
        l2=s2.size();
        ll a[l1+5][l2+5];
        memset(a,0,sizeof(a));
        for(ll i=1;i<=l1;i++)
            for(ll j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1]) a[i][j]=a[i-1][j-1]+1;
            else a[i][j]=max(a[i-1][j],a[i][j-1]);
        }

        cout<<a[l1][l2]<<endl;
    }
    return 0;
}
