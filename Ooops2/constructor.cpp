#include<bits/stdc++.h>
using namespace std;
class student{
public:
   string name;
   int rno;
   float percent;

//    student(string name,int rno,float percent) {
//         this->name = name;
//         this->rno = rno;
//         this->percent = percent;

//    }

 
  
//    student() {
    
//    }
//    student(string n,int r,float p) {
//         name=n;
//          rno=r;
//          percent=p;

//    }
};
int main() {
    // student s;
    // s.name="raghav";
    // s.rno=89;
    // s.percent=91.2;

//     student s("raghav",78);
//     s.percent=91.4;
 student s = {"raghav",78,92.6};

    cout<<s.name<<" "<<s.rno<<" "<<s.percent;
    // s.name="tarun";
    // cout<<s.name;
}