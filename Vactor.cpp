#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ri;

    ///v.assign(5,100);  ///if u want to assign first 5 number as value of 100


    for(int n=1;n<=10;n++)
    {
        v.push_back(n);

    }

    i = v.begin();
    v.erase(i+4);
    v.insert(i+4,100);


    for(i = v.begin();i != v.end(); i++)   ///iterator which is assigning address value
    {
        cout<< *i <<" ";         ///so we should use pointer value
    }

    cout<<endl;

    for(ri = v.rbegin();ri !=v.rend();ri++)
    {
        cout<< *ri <<" ";
    }


    /*
    for(int i = 0;i != v.size();i++)
    {
        cout<<v[i]<<endl;
    }
 */

}
