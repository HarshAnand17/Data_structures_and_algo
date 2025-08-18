#include<bits/stdc++.h>
using namespace std;
// class A{
//    public:
//    int age;
// };
class  ComplexNumber{
    public:
    int real;
    int imaginary;

    // ComplexNumber add(ComplexNumber &c1) {
    //     ComplexNumber c3;
    //     c3.imaginary=c1.imaginary+this->imaginary;
    //     c3.real=c1.real+this->real;
    //     return c3
    // }
    //main code
        ComplexNumber operator +(ComplexNumber &c1) {
            ComplexNumber c3;
            c3.imaginary=c1.imaginary+this->imaginary;
            c3.real=c1.real+this->real;
            return c3;
        }
};



// class  ComplexNumber{
//     public:
//     int real;
//     int imaginary;

//     ComplexNumber add(ComplexNumber &c1) {
//         ComplexNumber c3;
//         c3.imaginary=c1.imaginary+this->imaginary;
//         c3.real=c1.real+this->real;
//     }
// };
int main() {
//    A a1,a2;
//    a1.age=10;
//    a2.age=20;

//    A a3;
//    a3.age=a1.age+a2.age;

   ComplexNumber a1,a2;
   a1.imaginary=10;
   a1.real=5;
   a2.imaginary=2;
   a2.real=3;

//    ComplexNumber a3;
//    a3.real=a1.real+a2.real;
//    a3.imaginary=a1.imaginary+a2.imaginary;

   //ComplexNumber a3=a1.add(a2);
   ComplexNumber a3=a1+a2;

   cout<<"real "<<a3.real<<" "<<"imaginary :"<<a3.imaginary<<endl;
}