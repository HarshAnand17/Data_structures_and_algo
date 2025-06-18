#include<bits/stdc++.h>
using namespace std;
class Student{
public:
  string name;
  int rno;
  float marks;
  Student(string name,int rno,float marks) {
         this->name = name;
         this->rno =  rno;
         this->marks = marks;
  }
};
   void change(Student* s) {
      s->name="Harsh";
   }
int main() {
  // Student s("Raghav",76,95.8);
   Student* s=new Student("Raghav",76,95.8);
  
   cout<<s->name;
   change(s);
   cout<<s->name;
}