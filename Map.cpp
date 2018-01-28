#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string,int> mp;
    map <string,int> :: iterator i;

    /*mp["jac"]=100;
    mp["Aac"]=200;
    mp["Iac"]=300;
    mp["yac"]=400;*/

    mp.insert(pair <string,int> ("jac" , 100));
    mp.insert(pair <string,int> ("Aac" , 200));
    mp.insert(pair <string,int> ("Iac" , 300));
    mp.insert(pair <string,int> ("Yac" , 400));

    ///mp.erase("Aac");

    ///mp.erase(mp.begin(),mp.find("Yac"));  ///delete start from begin to your input string

     ///mp.erase(mp.find("Yac"),mp.end());   ///delete start from  input string  to your ending string



    for(i = mp.begin(); i != mp.end(); i++)   ///assending order
    {
        cout<< i->first <<" "<<i->second <<endl;
    }

   ///cout<<mp["jac"]<<endl;
}
