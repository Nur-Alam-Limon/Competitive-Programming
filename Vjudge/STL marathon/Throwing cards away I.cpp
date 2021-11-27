#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
    int a;
    while(cin>>a)
    {
    if(a==0) {break;}
    queue<int> x;
    for(int i=1;i<=a;i++)
    {
        x.push(i);
    }
    cout<<"Discarded cards:";
    while(x.size()!=1)
    {
        cout<<" "<<x.front();
        if(x.size()!=2) {cout<<",";}
        x.pop();
        x.push(x.front());
        x.pop();
    }
    cout<<endl;
    cout<<"Remaining card: "<<x.front()<<endl;
    }
    return 0;
}
