#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        int x[10],j;
        for(j=0;j<10;j++)
        {
            scanf("%d",&x[j]);
        }
        if(x[0]==0)
        cout<<"NO"<<endl;
        else if(x[0]==1 && x[1]==1 && x[2]==1 && x[6]==1 )
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[1]==1 && x[2]==1 && x[9]==1 )
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[4]==1 && x[5]==1 && x[6]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[4]==1 && x[5]==1 && x[9]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[7]==1 && x[8]==1 && x[6]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[7]==1 && x[8]==1 && x[9]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[4]==1 && x[8]==1 && x[6]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[4]==1 && x[8]==1 && x[9]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[7]==1 && x[5]==1 && x[6]==1)
            cout<<"YES"<<endl;
        else if(x[0]==1 && x[3]==1 && x[7]==1 && x[5]==1 && x[9]==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

