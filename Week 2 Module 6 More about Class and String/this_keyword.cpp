#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name=name;
            this->age=age;
        }
        void hello(){
            cout<<"Hello!"<<endl;
        }
};
int main ()
{
    Person bijoy("Bijoy Das Gupta",23);
    bijoy.hello();
    cout<<bijoy.name<<" "<<bijoy.age<<endl;
    return 0;
}