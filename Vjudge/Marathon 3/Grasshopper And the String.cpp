#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l,cnt=0,arr[100],k=0,f=0,x=0;
    int* m=0;
    cin>>s;
    l=s.size();
    for(int i=0;i<l;i++)
    {
        cnt++;
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            arr[k]=cnt; k++; cnt=0;
        }
        else if(i==l-1) {arr[k]=cnt+1; k++; break;}
    }
    m=std::max_element(arr,arr+k);
    printf("%d\n",(int)*m);
}
