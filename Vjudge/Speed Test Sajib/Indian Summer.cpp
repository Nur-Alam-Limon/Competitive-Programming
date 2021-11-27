#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=1;
    scanf(" %d ",&n);
        string s[n];
        for(int j=0;j<n;j++)
        {
            getline(cin,s[j]);
        }
        for(int k=0;k<n-1;k++)
        {
            for(int m=k+1;m<n;m++)
            {
                if(s[k]==s[m]) cnt++;
            }
        }
        printf("%d\n",n-(cnt/2));
    return 0;
}
