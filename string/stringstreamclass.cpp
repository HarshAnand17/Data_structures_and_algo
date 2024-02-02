#include<iostream>
#include<sstream>
using namespace std;

int main() {
    // string s="Raghav is a good teacher in pw";
    // stringstream ss(s);
    // string temp;

    // while(ss>>temp) {
    //     cout<<temp<<endl;
    // }

    string str[]={"0123","0023","456","00182","94000","002901"};
    int max=stoi(str[0]);
    string s=str[0];
    int maxIdx=0;
    for(int i=1;i<=5;i++) {
      int x=stoi(str[i]);
      if(max<x) {
        max=x;
        s=str[i];
        maxIdx=i;
      }  
    }
    cout<<max<<endl; 
    cout<<s<<endl; 
    cout<<maxIdx<<endl; 
}