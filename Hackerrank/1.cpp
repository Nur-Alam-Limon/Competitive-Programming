#include <iostream>

using namespace std;

int main()
{
    int i,x=0,y=0;
    char a[100];
    cin>>a;
    for(i=0;i<100;i++)
    {
        if(a[i]=='0')
           {
             x++;
    }
    }
    if(x>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
