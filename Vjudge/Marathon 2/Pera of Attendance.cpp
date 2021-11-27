#include<bits/stdc++.h>

using namespace std;

string s[20005],p;
int arr[30];

int main()
{
    long long int n,m,ans=0,x=0;
    string L;
    scanf(" %lld ",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        x=x+s[i].size();
    }
    cin>>L;
    m=L.size();
    if(x>m) {printf("-1\n"); return 0;}
    for(int j=0;j<m;j++)
    {
        arr[L[j]-'A']++;
    }
    for(int k=0;k<n;k++)
    {
        long long sz=s[k].size();
    for(int a=0;a<sz;a++)
    {
        if(arr[s[k][a]-'A']==0) ans++;
        else arr[s[k][a]-'A']--;
    }
    }
    printf("%lld\n",ans);
}
