#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cout<<"enter no:";
    cin>>x;
    string y=to_string(x);
    int i=0;
    int j=y.size()-1;
    bool flag=true;
    do{
      slow=slow->next;
      fast=fast->next->next;
    }while(slow!=fast);
    while(i<j) {
        if(y[i]!=y[j]) {
         cout<<"not";
         flag=false;
         break;
        }
        else{
         i++;
         j--;
        }

    }
    if(flag==true) cout<<"yes";

}