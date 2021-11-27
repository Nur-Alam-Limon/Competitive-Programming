#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        long long int a[n+5],x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=1;j<n-1;j++)
        {
            if(a[j]>a[j+1] && a[j]>a[j-1])
                {
                    cout<<"YES"<<endl;
                    cout<<j<<" "<<j+1<<" "<<j+2<<endl;
                    x++;
                    break;
                }
        }
            if(x==0) cout<<"NO"<<endl;
    }
    return 0;
}
