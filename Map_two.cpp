#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> m1;
    map <int,int> ::iterator it;

    m1.insert(pair <int,int> (1,50));
    m1.insert(pair <int,int> (2,55));
    m1.insert(pair <int,int> (3,65));
    m1.insert(pair <int,int> (4,100));
    m1.insert(pair <int,int> (5,110));
    m1.insert(pair <int,int> (6,65));

    cout<<"\tKey\tElement"<<endl;
    for(it = m1.begin();it != m1.end(); it++)
    {
      cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
    }

    cout<<"\n"<<"Assigning the elements from M1 to M2"<<"\n";

    map <int,int> m2(m1.begin(),m1.end());  ///all the values of m1 assign to the m2

    cout<<"\tKey\tElement"<<endl;
    for(it = m2.begin();it != m2.end();it++)
    {
        cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
    }

     cout << endl;


     cout<<"\tKey\tElement"<<endl;
    m2.erase(m2.begin(), m2.find(3));
    for (it = m2.begin(); it != m2.end(); it++)
    {
        cout  <<  '\t' << it->first <<  '\t' << it->second << '\n';
    }


    int num;
    num = m2.erase (4);
    cout << "\nM2.erase(4) : \n";

    cout<<"\tKey\tElement"<<endl;
    for (it = m2.begin(); it != m2.end(); it++)
    {
        cout  <<  '\t' << it->first <<  '\t' << it->second << '\n';
    }

    cout << endl;



}
