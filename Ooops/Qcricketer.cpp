#include<bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
     char name;
     int age;
     int noOfTestMatch;
     int avgscore;
  };
int main() {
    Cricketer virat;

    virat.name='v';
    virat.age=30;
    virat.noOfTestMatch=200;
    virat.avgscore=90;

    Cricketer dhoni;
    dhoni.name='d';
    dhoni.age=40;
    dhoni.noOfTestMatch=400;
    dhoni.avgscore=80;

    Cricketer cricketers[2]={virat,dhoni};
   
  for(int i=0;i<2;i++) {
    cout<<cricketers[i].name<<endl;
    cout<<cricketers[i].age<<endl;
    cout<<cricketers[i].noOfTestMatch<<endl;
    cout<<cricketers[i].avgscore<<endl;
  }

}