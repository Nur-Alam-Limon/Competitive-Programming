#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll adj[105][105];
ll check[105];
ll INF=63;

double floyd()
{
    double cnt=0;
    double sum=0;
    for(ll i=0;i<=100;i++)
    {
        for(ll j=0;j<=100;j++)
        {
            for(ll k=0;k<=100;k++)
            {
                    if(adj[j][i]+adj[i][k]<adj[j][k])
                    {
                        adj[j][k]=adj[j][i]+adj[i][k];
                    }
            }
        }
    }
    for(ll i=0;i<=100;i++)
    {
        for(ll j=0;j<=100;j++)
        {
            if(i==j) continue;
            if(check[i]==1 && check[j]==1)
            {
                cnt++;
                sum+=adj[i][j];
            }
        }
    }
    return sum/cnt;
}

int main()
{
    ll a,b,x=0;
    while(cin>>a>>b)
    {
        if(a==0 && b==0) break;
        memset(adj,INF,sizeof(adj));
        memset(check,0,sizeof(check));
        adj[a][b]=1;
        check[a]=1;
        check[b]=1;
        while(1)
        {
            cin>>a>>b;
            if(a==0 && b==0) break;
            adj[a][b]=1;
            check[a]=1;
            check[b]=1;
        }
        x++;
        cout<<"Case "<<x<<": average length between pages = "<<fixed<<setprecision(3)<<floyd()<<" clicks"<<endl;
    }
    return 0;
}
