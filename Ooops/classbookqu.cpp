#include<bits/stdc++.h>
using namespace std;
class Book{
   public:
   int price;
   int pages;
   char name;
   public:
   int countbook(int p) {
      if(p<price) return 1;
      else return 0;
   }
   bool isbookpr(char book) {
      if(name==book) {
         return true;
      }
      else return false;
   }
};

int main() {
  Book harry;
    harry.price=4000;
    harry.name='h';

   cout<<harry.countbook(2000);
   cout<<harry.isbookpr('p');

}