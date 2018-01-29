///last in first out
#include<bits/stdc++.h>
using namespace std;

void show(stack <int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main()                           ///u can't use iterator on stack & queue
{
    stack <int> st;

    for(int i=1;i<=10;i++)
    {
        st.push(i);
    }

    //cout<<st.top()<<endl;
    //cout<<st.size()<<endl;
    show(st);
}
