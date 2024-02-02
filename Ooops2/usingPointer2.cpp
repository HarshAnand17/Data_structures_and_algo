#include<bits/stdc++.h>
using namespace std;
class student{
public:
   string name;
   int rno;
   float percent;

   student(string name,int rno,float percent) {
        this->name = name;
        this->rno = rno;
        this->percent = percent;

   }

};
   void change(student* s) {
       s->name = "harsh";
   }
int main() {
   student s("raghav",78,90.1);
//    student* ptr=&s;
//    cout<<s.name<<endl;
//    ptr->name = "harsh";
//     cout<<s.name<<endl;
//     (*ptr).name = "rahul";
//      cout<<s.name<<endl;
 
     cout<<s.name<<endl;
     change(&s);
     cout<<s.name<<endl;

}