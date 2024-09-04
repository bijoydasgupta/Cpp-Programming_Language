#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a="Hello";
    string b="A";
    //a+=b;
    //a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    //a="HelloA"; -> works
    //a=a+"A"; -> works
    //a[5]='A'; -> didn't work
    a.push_back('B'); // works
    a.pop_back();
    a.pop_back();
    cout<<a<<endl;


    return 0;
}