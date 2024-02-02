#include<bits/stdc++.h>
using namespace std;
 class student {
   public:
    int no;
    int age;
    string address;
    void showHealth() {
      cout<<"health is : "<<age<<endl;
    }
    void showhealth() {
       cout<<"score is :"<<no;
    }
    // void showscore() {
    //    cout<<"score is :"<<no;
    // }
};
int main() {
     student amit;
     amit.no=20;
     amit.age=18;
     amit.address="jn";
     cout<<amit.no<<endl;      
     cout<<amit.age<<endl;      
     cout<<amit.address<<endl; 
     amit.showHealth(); 
     amit.showhealth(); 
     cout<<endl;
     cout<<endl;
    student harsh;
    harsh.no=21;    
    harsh.age=29;    
    harsh.address="sam";
    // cout<<harsh.no<<endl;    
    // cout<<harsh.age<<endl;    
    // cout<<harsh.address<<endl;    
}