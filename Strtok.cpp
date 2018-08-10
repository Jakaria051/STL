#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
    char *point;
    point = strtok(str,".");
    while(point != NULL)
    {
        cout<<point<<endl;
        point = strtok(NULL,"."); ///STR here start from the begining
    }

}
