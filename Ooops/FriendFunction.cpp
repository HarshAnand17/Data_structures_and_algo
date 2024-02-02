#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
public:
 int imaginary;
 int real;

//   ComplexNumber add(ComplexNumber &c1,ComplexNumber &c2) {
//       ComplexNumber c3;
//       c3.imaginary = c1.imaginary + c2.imaginary;
//       c3.real = c1.real + c2.real;
//   }

//   ComplexNumber add(ComplexNumber &c1) {
//       ComplexNumber c3;
//       c3.imaginary = c1.imaginary + this->imaginary;
//       c3.real = c1.real + this->real;
//       return c3;
//   }

  ComplexNumber operator +(ComplexNumber &c1) {
      ComplexNumber c3;
      c3.imaginary = c1.imaginary + this->imaginary;
      c3.real = c1.real + this->real;
      return c3;

  }
};
class A{
    int a_private = 10;
    public:
    friend void show(A &a);
    // void show2()  {
    //     cout<<a_private<<endl;
    // }
};
void show(A &a){
     cout<<a.a_private<<endl;
}
int main() {
   A a;
   show(a);
 
}