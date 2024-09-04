#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    stringstream bd(str);
    string word;
    int flag=0;
    while(bd>>word)
    {
        if(word=="Jessica")
        {
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"NO";
    if(flag==1) cout<<"YES";
    return 0;
}