#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    ll l1,l2;
    l1=s1.size();
    l2=s2.size();
    ll a[l1+5][l2+5];
    for(ll i=0;i<=l1;i++) a[i][l2]=0;
    for(ll i=0;i<=l2;i++) a[l1][i]=0;

    for(ll i=l1-1;i>=0;i--)
        for(ll j=l2-1;j>=0;j--)
        {
            if(s1[i]==s2[j]) a[i][j]=(a[i+1][j+1]) + 1;
            else
            {
                a[i][j]=max(a[i+1][j],a[i][j+1]);
            }
        }
    cout<<a[0][0]<<endl;

    ll pq=a[0][0];
    char lcs[pq+2];
    int i=l1,j=l2;

    while(i>0 && j>0)
    {
      if (s1[i-1]==s2[j-1])
      {
          lcs[pq-1]=s1[i-1];
          i--;
          j--;
          pq--;
      }
      else if (a[i-1][j]>a[i][j-1])
         i--;
      else
         j--;
    }
    cout << "LCS of " << s1 << " and " << s2 << " is " << lcs;
    return 0;
}
