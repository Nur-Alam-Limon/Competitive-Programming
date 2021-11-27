#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.00)
#define ll long long
#define all(x) x.begin(),x.end()
#define MAX 300005
#define ld double
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);

    ll t, cs=1;
    cin >> t;

    while(t--)
    {
        ll n, l;
        cin >>l>>n;
        ld d=(ld) l/(ld) n;
        ld area=(d*d*n);
        ld an=(ld) pi/ (ld) n;
        an=4*tan(an);
        area/=an;
        cout<<setprecision(20)<<area<<endl;
    }

    return 0;
}
