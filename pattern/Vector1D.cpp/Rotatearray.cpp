#include <bits/stdc++.h>

using namespace std;

void display(vector<int>v) {
    for(auto i:v)cout<<i<<" ";
    cout<<endl;
 }
 
void reversePart(int i,int j,vector<int>&v) {
     while(i<=j) {
       int temp=v[i];
       v[i]=v[j];
       v[j]=temp;
       i++;
       j--;
     }
    
 }
int main() {
    vector<int>v={4,1,9,5,8,2};// 
    int n=v.size();
    int k=9;
    if(k>n) k=k%n;
    display(v);//o n
    reversePart(0,n-k-1,v);//9 1 4 5 8 2
    reversePart(n-k,n-1,v);//9 1 4 2 8 5
    reversePart(0,n-1,v);//5 8 2 4 1 9
    display(v);
   // reverse(v.begin(),v.end());
    //  for(int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
     
    //  int i=0;
    //  int j=v.size()-1;
    // while(i<=j) {
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // // display(v);
    // for(int i=0;i<v.size();i++) {
    //     cout<<v[i]<<" ";
    // }
}