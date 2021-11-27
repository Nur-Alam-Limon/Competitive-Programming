#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll eddp(string &s1,string &s2)
{
    ll l1=s1.size();
    ll l2=s2.size();

    ll a[l1+2][l2+2];

    for(ll i=0;i<=l1;i++)
    {
        for(ll j=0;j<=l2;j++)
        {
            if(i==0) a[i][j]=j;
            else if(j==0) a[i][j]=i;
            else if(s1[i-1]==s2[j-1]) {a[i][j]=a[i-1][j-1];}
            else
            {
                a[i][j]=1+(min(a[i][j-1],(min(a[i-1][j-1],a[i-1][j]))));
            }
        }
    }
    return a[l1][l2];
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<eddp(s1,s2)<<endl;
    return 0;
}
