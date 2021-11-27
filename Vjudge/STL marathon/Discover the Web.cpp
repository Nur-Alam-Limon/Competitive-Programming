#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        string a,b,c;
        stack< string > st;
        stack< string > s;
        st.push("http://www.lightoj.com/");
        while(cin>>a)
        {
            if(a=="QUIT") break;
            else if(a=="VISIT")
            {
                cin>>b;
                st.push(b);
                cout<<b<<endl;
                while(!s.empty())
                {
                    s.pop();
                }
            }
            else if(a=="BACK")
            {
                if(st.size()>1)
                {
                    c=st.top();
                    s.push(c);
                    st.pop();
                    cout<<st.top()<<endl;
                }
                else cout<<"Ignored"<<endl;
            }
            else if(a=="FORWARD")
            {
                if(s.size()>=1)
                    {
                        cout<<s.top()<<endl;
                        st.push(s.top());
                        s.pop();
                    }
                else cout<<"Ignored"<<endl;
            }
        }
    }

    return 0;
}
