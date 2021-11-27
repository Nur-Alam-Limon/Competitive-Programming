#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];

        ll ans=0;

        for(int i=1;i<(1<<3);i++)
        {
            bitset<3> x(i);
            ll can=1;
            for(int j=0;j<3;j++)
            {
                if(x[j] == 1)
                {
                    if(!a[j]) can=0;
                }
            }

            if(can) ans++;
            for(int j=0;j<3;j++)
            {
                if(x[j] == 1)
                {
                    a[j]--;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
