#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf(" %d ",&T);
    for(int i=0;i<T;i++)
    {
        string a;
        int l=0;
        getline(cin,a);
        l=a.size();
        if(a[l-2]=='p' && a[l-1]=='o')
        {
            printf("FILIPINO\n");
        }
        else if(a[l-4]=='m' && a[l-3]=='a' && a[l-2]=='s' && a[l-1]=='u')
        {
            printf("JAPANESE\n");
        }
        else if(a[l-4]=='d' && a[l-3]=='e' && a[l-2]=='s' && a[l-1]=='u')
        {
            printf("JAPANESE\n");
        }
        else if(a[l-5]=='m' && a[l-4]=='n' && a[l-3]=='i' && a[l-2]=='d' && a[l-1]=='a')
        {
            printf("KOREAN\n");
        }
    }
}
