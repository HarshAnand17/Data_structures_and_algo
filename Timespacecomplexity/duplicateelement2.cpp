#include<bits/stdc++.h>
using namespace std;

   void removeEle(stack<int>&st,int k) {
        stack<int>temp;
        for(int i=1;i<=k-1;i++) {
           int x= st.top();
           st.pop();
           temp.push(x);
        }
        st.pop();
        while(temp.size()>0) {
            st.push(temp.top());
            temp.pop();
        }
   } 
   void display(stack<int>&st) {
       stack<int>temp;
       while(st.size()>0) {
         cout<<st.top();
         temp.push(st.top());
         st.pop();
       }
       while(temp.size()>0) {
         st.push(temp.top());
         temp.pop();
       }
   }
   int main() {
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    display(st);
    removeEle(st,3);
    cout<<endl;
     display(st);
   }
