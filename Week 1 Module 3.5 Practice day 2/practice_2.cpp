#include <bits/stdc++.h>
using namespace std;
class Cricketer 
{
public:
    int jersey_no;
    char country[100];
};

int main() {
    // Create a dynamic object named dhoni
    Cricketer *dhoni = new Cricketer{7, "India"};

    // Create another dynamic object named kohli and copy data from dhoni
    Cricketer *kohli = new Cricketer{*dhoni};

    // Print the details of kohli
    cout << "Jersey No: " << kohli->jersey_no << ", Country: " << kohli->country << endl;

    return 0;
}