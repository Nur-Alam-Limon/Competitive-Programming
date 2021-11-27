#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,a=0,b=0,c=0,d=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U') a++;
        else if (s[i]=='D') b++;
        else if (s[i]=='L') c++;
        else if (s[i]=='R') d++;
    }
    if(a<b) ans=a*2;
    else ans=b*2;
    if(c<d) ans+=c*2;
    else ans+=d*2;
    cout<<ans<<endl;
    return 0;
}
