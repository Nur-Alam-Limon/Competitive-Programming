#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
     int a,b,c,big=0,small=0,m=0;
     cin>>a>>b>>c;
     if(a>b && a>c)
        big=a;
     else if(b>a && b>c)
        big=b;
     else if(c>a && c>b)
        big=c;

        if(a<b && a<c)
        small=a;
     else if(b<a && b<c)
        small=b;
     else if(c<a && c<b)
        small=c;

        m=a+b+c-big-small;
        cout<<"Case "<<i+1<<": "<<small<<" "<<m<<" "<<big<<endl;

    }
    return 0;
}


