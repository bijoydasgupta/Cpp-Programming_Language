#include <bits/stdc++.h>
using namespace std;
void print(stringstream& ss)//reference
{
    string word;
    if(ss>>word){
        print(ss);
        cout<<word<<" ";
    }
}
int main ()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}