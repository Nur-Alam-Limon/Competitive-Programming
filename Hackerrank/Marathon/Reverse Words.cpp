#include <bits/stdc++.h>

using namespace std;

int main()
{
        int T;
        cin>>T;
        for(int x=0;x<T;x++)
        {
        string s=0;
        int begin,end,i,j=0,len,temp=0,count=0;
        getline(cin,s);
        len=s.length();
        for(i=0;i<(len/2);i++)
        {
                temp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=temp;
        }
        for(i=0;i<len;i++)
        {
                 if(s[i]==' ' || s[i]=='\0')
                {
                         for(begin=j,end=i-1 ; begin<(i+j)/2 ; begin++,end--)
                         {
                                   temp=s[begin];
                                   s[begin]=s[end];
                                   s[end]=temp;
                         }
                         j=i+1;
                }
         }

       cout<<s<<" ";
        }

       return 0;
}
