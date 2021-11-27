#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf(" %d ",&T);
    for(int i=0;i<T;i++)
    {
        string s,c;
        char small=0;
        long long int a=0,b=0,y=0,cnt=0,x=1;
        cin>>s;
        cin>>c;
        a=s.size();
        b=c.size();
        if(a<=b) {y=a;}
        else {y=b;}
        for(int j=0;j<a;j++)
        {
            small=s[j];
            if(cnt==1) break;
            for(int k=a;k>j;k--)
            {if(s[k]<small)
            {
                small=s[k];
                s[k]=s[j];
                s[j]=small;
                cnt++;
                break;
            }
            }
        }
        for(int m=0;m<y;m++)
        {
            if(s[m]<c[m]) {cout<<s<<endl; break;}
            else if(s[m]>c[m]) {cout<<"---"<<endl; break;}
            else if(s[m]==c[m]) {x++;}
        }
        if(x==y)
        {
            if(a<b) {cout<<s<<endl;}
            else if(a>b) {cout<<"---"<<endl;}
        }
    }
}

