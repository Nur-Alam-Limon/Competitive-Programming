#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,sum=0,x=0,y=1,ans=0;
        string a,b=0;
        cin>>n;
        cin>>a;
        b=a;
        char arr[n+5];
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=b%10;
            cout<<arr[i]<<endl;
            b=b/10;
            cout<<b<<endl;
        }
        for(int j=0;j<n;j++)
        {
            sum=sum+arr[j];
        }
        if((sum%2)==0 && (a%2)!=0)
        {
            //cout<<a<<endl;
            continue;
        }
        while(y--)
        {
            x=0;
            for(int k=0;k<n;k++)
            {
                if(arr[k]%2!=0)
                {
                    arr[k]=0;
                    x++;
                    break;
                }
            }
            if(x==0) {//cout<<"-1"<<endl;
                    y=0;}
            else
            {
                sum=0;
                ans=0;
                for(int m=0;m<n;m++)
                {
                    ans=ans*10+arr[m];
                    cout<<ans<<endl;
                    sum=sum+arr[m];
                    cout<<sum<<endl;
                }
                if(sum%2==0 && ans%2!=0)
                {
                    //cout<<ans<<endl;
                    y=0;
                }
            }
        }
    }
    return 0;
}
