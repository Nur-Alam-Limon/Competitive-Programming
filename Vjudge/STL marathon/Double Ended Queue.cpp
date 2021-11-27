#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,z=1;
    cin>>T;
    while(T--)
    {
        cout<<"Case "<<z<<":"<<endl;
        z++;
        int a,b;
        cin>>a>>b;
        deque<int> x;
        while(b--)
        {
            string c;
            int d,e;
            cin>>c;
            if(c=="pushLeft")
            {
                cin>>d;
                if(x.size()!=a)
                {
                    x.push_front(d);
                    cout<<"Pushed in left: "<<d<<endl;
                }
                else cout<<"The queue is full"<<endl;
            }
            else if(c=="pushRight")
            {
                cin>>d;
                if(x.size()!=a)
                {
                    x.push_back(d);
                    cout<<"Pushed in right: "<<d<<endl;
                }
                else cout<<"The queue is full"<<endl;
            }
            else if(c=="popLeft")
            {
                if(!x.empty())
                {
                    cout<<"Popped from left: "<<x.front()<<endl;
                    x.pop_front();
                }
                else cout<<"The queue is empty"<<endl;
            }
            else if(c=="popRight")
            {
                if(!x.empty())
                {
                    cout<<"Popped from right: "<<x.back()<<endl;
                    x.pop_back();
                }
                else cout<<"The queue is empty"<<endl;
            }
        }

    }
    return 0;
}
