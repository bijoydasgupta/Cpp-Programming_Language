#include <bits/stdc++.h>
using namespace std;
void print(int test){
    for(int t=1; t<=test; t++){
        int n;
        char ch;
        cin>>n>>ch;
        for(int i=1; i<=n; i++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main ()
{
    int test;
    cin>>test;
    print(test);
    return 0;
}