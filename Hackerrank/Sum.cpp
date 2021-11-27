#include <bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    std::string str;
    str=c;
    sort(str.begin(),str.end());
    {if(str=="a" || str=="b")
        {cout<<"YES"<<endl;}
    else
        {cout<<"NO"<<endl;}
    }
return 0;
}
