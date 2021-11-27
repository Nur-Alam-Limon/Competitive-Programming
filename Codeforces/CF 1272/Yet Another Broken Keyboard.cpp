#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int n,k,x=0,cnt=0,ans=0;
    scanf("%lld %lld ",&n,&k);
    string s;
    getline(cin,s);
    char l[k];
    for(int i=0;i<k;i++)
    {
        scanf(" %c",&l[i]);
    }

    for(int j=0;j<n;j++)
    {
        for(int p=0;p<k;p++)
        {
            if(s[j]==l[p])
               {s[j]=1;
               break;}
        }
    }

    for(int q=0;q<n+1;q++)
    {
        if (s[q]==1){cnt++;}
        else
        {
            ans=ans+((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    printf("%lld\n",ans);
}
