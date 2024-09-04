#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        int even_cnt=0, odd_cnt=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0){
                even_cnt++;
            }
            else{
                odd_cnt++;
            }
        }
        if(even_cnt==odd_cnt){
            cout<<"0"<<endl;
        }
        else if(n % 2 != 0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<abs(even_cnt-odd_cnt)/2<<endl;
        }
    }
    return 0;
}