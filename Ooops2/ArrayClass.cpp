#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int averageScore;
};
int main() {
    Cricketer virat;
    virat.name='H';
    virat.age=30;
    virat.averageScore=200;
    virat.noOfTestMatches=400;

    Cricketer dhoni;
    dhoni.name='D';
    dhoni.age=50;
    dhoni.averageScore=300;
    dhoni.noOfTestMatches=100;

    Cricketer Cricketers[2]={virat,dhoni};

    for(int i=0;i<2;i++) {
        cout<<Cricketers[i].name<<endl;
        cout<<Cricketers[i].age<<endl;
        cout<<Cricketers[i].noOfTestMatches<<endl;
        cout<<Cricketers[i].averageScore<<endl;   
   }
}