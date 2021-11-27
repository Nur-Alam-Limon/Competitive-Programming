#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b=0,ans=0,cnt=0;
    cin>>a;
    long long int ar[a+5];
    for(int i=0;i<a;i++) {cin>>ar[i];}
    for(int j=0;j<a;j++)
    {
        if(ar[j]%2==0) {b++;}
    }
    for(int k=0;k<a;k++)
    {
        if(b>1) {if(ar[k]%2==1) ans=k;}
        else {if(ar[k]%2==0) ans=k;}
    }
    cout<<ans+1<<endl;
    return 0;
}
