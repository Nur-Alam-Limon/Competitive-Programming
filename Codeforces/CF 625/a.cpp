#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define FIO ios_base::sync_with_stdio(NULL);cin.tie(NULL)
#define MAX 500005

int main()
{
    FIO;

    ll n;
    cin >> n;

    ll a[n], b[n], marka[n]={0}, markb[n]={0}, gap=0, both=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    ll sum=0, summ=0;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
        sum+=b[i];

        if(b[i] && a[i]) both++;
        if(a[i] && !b[i]) gap++;
    }

    ll tot = sum;
    tot-=both;

    ll need = tot+1;

    if(!gap)
    {
        cout << -1 << endl;
        return 0;
    }

    if(need%gap == 0) cout << need/gap << endl;
    else cout << need/gap  + 1 << endl;


    return 0;
}
