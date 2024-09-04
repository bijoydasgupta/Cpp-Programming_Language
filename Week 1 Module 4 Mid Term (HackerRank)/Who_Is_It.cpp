#include <bits/stdc++.h>
using namespace std;
class Student{
public:
    int ID;
    char name[101];
    char section;
    int total_marks;
    Student(int id,char n[],char sec, int total){
        ID = id;
        strcpy(name, n);
        section = sec;
        total_marks = total;
    }
};
int main (){
    int id1, id2, id3, total1, total2, total3;
    char name1[101], name2[101],name3[101];
    char sec1, sec2, sec3;
    int test;
    cin>>test;
    for(int t=1; t<=test; t++){
        cin>>id1>>name1>>sec1>>total1;
        cin>>id2>>name2>>sec2>>total2;
        cin>>id3>>name3>>sec3>>total3;

        Student a(id1,name1,sec1,total1);
        Student b(id2,name2,sec2,total2);
        Student c(id3,name3,sec3,total3);

        if (total1>total2 && total1>total3){
            cout<<id1<<" "<<name1<<" "<<sec1<<" "<<total1<<endl;
        }
        else if(total2>total1 && total2>total3){
            cout<<id2<<" "<<name2<<" "<<sec2<<" "<<total2<<endl;
        }
        else if(total3>total1 && total3>total2){
            cout<<id3<<" "<<name3<<" "<<sec3<<" "<<total3<<endl;
        }
        else if(total1==total2 && total2==total3 && total1==total3){
            if(id1<id2 && id1<id3){
                cout<<id1<<" "<<name1<<" "<<sec1<<" "<<total1<<endl;
            }
            else if(id2<id1 && id2<id3){
                cout<<id2<<" "<<name2<<" "<<sec2<<" "<<total2<<endl;
            }
            else{
                cout<<id3<<" "<<name3<<" "<<sec3<<" "<<total3<<endl;
            }
        }
        else if(total1==total2){
            if(id1<id2){
                cout<<id1<<" "<<name1<<" "<<sec1<<" "<<total1<<endl;
            }
            else{
                cout<<id2<<" "<<name2<<" "<<sec2<<" "<<total2<<endl;
            }
        }
        else if(total1==total3){
            if(id1<id3){
                cout<<id1<<" "<<name1<<" "<<sec1<<" "<<total1<<endl;
            }
            else{
                cout<<id3<<" "<<name3<<" "<<sec3<<" "<<total3<<endl;
            }
        }
        else if(total2==total3){
            if(id2<id3){
                cout<<id2<<" "<<name2<<" "<<sec2<<" "<<total2<<endl;
            }
            else{
                cout<<id3<<" "<<name3<<" "<<sec3<<" "<<total3<<endl;
            }
        }

    }
    
}