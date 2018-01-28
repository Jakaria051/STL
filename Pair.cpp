#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1st rules
    pair<int, char>p;
    p.first = 10;
    p.second = 'A';
    cout<<p.first<<" "<<p.second<<endl;

    //second alternative rules

    pair<int ,char>p1(10,'B');
    cout<<p1.first<<" "<<p1.second<<endl;

    //third  alternative rules

    pair < int, int>p2;
    p2 = make_pair(20,30);
     cout<<p2.first<<" "<<p2.second<<endl;

     //fourth alternative rules
    pair < string, pair<int,char> >student;
    student = make_pair("jakaria",make_pair(051,'J'));
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;

    return 0;

}
