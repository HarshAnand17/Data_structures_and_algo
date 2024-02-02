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
int main() {
    ComplexNumber a1,a2;
    a1.imaginary = 10;
    a1.real = 20;
    a2.imaginary = 2;
    a2.real=4

    // a3.real = a1.real+a2.real;
    // a3.imaginary = a1.imaginary+a2.imaginary;

   // ComplexNumber a3 = a1.add(&a2);

    ComplexNumber a3;
     a3 = a1+a2;
    cout<<"real : "<<a3.real<<" "<<a3.imaginary<<endl;
}