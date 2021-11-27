#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        string s;
        cin>>s;
        long long int l=0,cnt=0;
        l=s.size();
        for(int j=0;j<l;j++)
        {
            if(s[j]=='D') cnt++;
        }
        if(cnt==0) printf("Possible\n");
        else printf("You shall not pass!\n");
    }
    return 0;
}
