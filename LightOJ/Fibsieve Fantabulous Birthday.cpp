#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        long long int S;
        scanf("%lld",&S);
        int x=0,y=0;
        for(int j=0;j<S;j=j+25)
        {
            {
                if(x!=0 && y!=0)
                    break;
            }
        {if(S==25+j || S==10+j || S==9+j || S==2+j || S==1+j)
            x=1;
        else if(S==24+j || S==11+j || S==8+j || S==3+j || S==4+j)
            x=2;
        else if(S==23+j || S==12+j || S==7+j || S==6+j || S==5+j)
            x=3;
        else if(S==22+j || S==13+j || S==14+j || S==15+j || S==16+j)
            x=4;
        else if(S==21+j || S==20+j || S==19+j || S==18+j || S==17+j)
            x=5;}
        {if(S==1+j || S==4+j || S==5+j || S==16+j || S==17+j)
            y=1;
        else if(S==2+j || S==3+j || S==6+j || S==15+j || S==18+j)
            y=2;
        else if(S==9+j || S==8+j || S==7+j || S==14+j || S==19+j)
            y=3;
        else if(S==10+j || S==11+j || S==12+j || S==13+j || S==20+j)
            y=4;
        else if(S==25+j || S==24+j || S==23+j || S==22+j || S==21+j)
            y=5;}
        }
        printf("Case %d: %d %d\n",i+1,x,y);
    }
}

