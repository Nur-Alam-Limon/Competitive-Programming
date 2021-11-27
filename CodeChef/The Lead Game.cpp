#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,lead=0,win=0,p1=0,p2=0;
    cin>>n;
    while(n--)
    {
        long long int a1,a2;
        cin>>a1>>a2;
        p1+=a1;
        p2+=a2;
        if(p1>=p2 && p1-p2>lead) {lead=p1-p2; win=1;}
        else if(p2>=p1&& p2-p1>lead) {lead=p2-p1; win=2;}
    }
    cout<<win<<" "<<lead<<endl;
    return 0;
}
