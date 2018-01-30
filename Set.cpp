///when you are inserting a value in a set that value always be unique ...not the same value print the multiple times

#include<bits/stdc++.h>
using namespace std;
int main()
{


    set <int> setVariable;
    set <int> :: iterator setIterator;


    ///print the dessending order

    /*set <int , greater< int> > setVariable;
    set <int ,greater< int> >:: iterator setIterator;
    */
    setVariable.insert(50);
    setVariable.insert(60);
    setVariable.insert(40);
    setVariable.insert(30);
    setVariable.insert(10);
    setVariable.insert(20);
    setVariable.insert(70);
    setVariable.insert(80);
    setVariable.insert(75);
    setVariable.insert(50);

    ///setVariable.erase(30);  ///for particular value delete

    setIterator = setVariable.begin();
    setVariable.erase(setIterator,setVariable.find(40));


    for (setIterator = setVariable.begin();setIterator != setVariable.end();setIterator++)
    {
        cout << *setIterator<<" ";
    }
    cout<<endl;

}
