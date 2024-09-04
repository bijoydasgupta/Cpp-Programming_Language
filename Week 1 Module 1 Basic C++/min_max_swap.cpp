#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
int main ()
{
    int a, b;
    cin >> a >> b;
    swap(a,b);
    // my_swap(&a,&b);
    cout << a << " " << b <<endl;
    // int a,b,c,d;
    // cin >> a >> b >> c >> d;
    // int c = min(a,b);
    // int d = max(a,b);
    // cout << c << endl << d;
    // int mn = min({a,b,c,d});
    // int mx = max({a,b,c,d});
    // cout << mn << endl << mx << endl;

    return 0;
}