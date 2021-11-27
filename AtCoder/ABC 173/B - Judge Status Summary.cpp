#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,a=0,w=0,t=0,r=0;
    cin>>N;
    string s[N+5];
    for(int i=0;i<N;i++)
    {
        cin>>s[i];
        if(s[i]=="AC") a++;
        else if(s[i]=="WA") w++;
        else if(s[i]=="TLE") t++;
        else if(s[i]=="RE") r++;
    }
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<w<<endl;
    cout<<"TLE x "<<t<<endl;
    cout<<"RE x "<<r<<endl;

    return 0;
}
