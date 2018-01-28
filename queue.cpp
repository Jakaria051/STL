
///first in ---> first out &&& last in --->>>last out

#include<bits/stdc++.h>
using namespace std;

void show(queue <string> queueTemp)
{
    while(!queueTemp.empty())
    {
        cout<<queueTemp.front()<<endl;
        queueTemp.pop();
    }
}


int main()
{
    queue<string>q;

    q.push("Jakaria");
    q.push("Rabel");
    q.push("Rajib");
    q.push("Jahan");

    show(q);   ///call the class

    ///q.pop();

    ///cout <<q.size() <<endl;
    ///cout <<q.front() <<endl;  ///print first string
    ///cout <<q.back() <<endl;  ///print last string

}
