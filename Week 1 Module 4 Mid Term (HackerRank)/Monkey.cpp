#include <bits/stdc++.h>
using namespace std;
int main ()
{
    char s[100005];
    while(cin.getline(s,100005)){
        int l=strlen(s);
        sort(s, s+l);
        for(int i=0; i<l; i++){
            if(s[i]==' ')
                continue;
            cout<<s[i];
        }
        cout<<endl;
    }
    
    return 0;
}