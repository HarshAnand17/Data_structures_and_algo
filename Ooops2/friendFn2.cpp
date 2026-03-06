#include<bits/stdc++.h>
using namespace std;
class  ComplexNumber{
    private:
    int priv;
    public:
    int real;
    int imaginary;

     friend ComplexNumber operator + (ComplexNumber &c1,ComplexNumber &c2);
      friend class primeNumber;
};

class primeNumber{
    void show(ComplexNumber  &c) {
        c.priv=10;
    }
};
ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2) {
    ComplexNumber c3;
    c3.imaginary=c1.imaginary+c2.imaginary;
    c3.real=c1.real+c2.real;
    return c3;
}
int main() {

   ComplexNumber a1,a2;
   a1.imaginary=5;
   a1.real=10;
   a2.imaginary=20;
   a2.real=5;
   ComplexNumber a3=a1+a2;

   cout<<"real "<<a3.real<<" "<<"imaginary :"<<a3.imaginary<<endl;
}