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
    cin  >> n;

    string s;
    cin >> s;

    ll ans=0;
    for(char i='z';i>='a';i--)
    {
        for(int j=s.size()-1;j>=0;j--)
        {
            if(s[j] == i)
            {
                if(j>0 && j<s.size()-1)
                {
                    if(s[j-1] == i+1 || s[j-1] == i-1 || s[j+1] == i+1 || s[j+1] == i-1)
                    {
                        ans++;
                        s.erase(s.begin()+j);
                        j++;
                    }
                }
                else if(j==0)
                {
                    if(s[j+1] == i+1 || s[j+1] == i-1)
                    {
                        ans++;
                        s.erase(s.begin()+j);
                        j++;
                    }
                }
                else if(j == s.size()-1)
                {
                    if(s[j-1] == i+1 || s[j-1] == i-1)
                    {
                        ans++;
                        s.erase(s.begin()+j);
                        j++;
                    }
                }
            }
        }
    }

//    cout << s << endl;
    cout << ans << endl;

    return 0;
}

