#include<bits/stdc++.h>
using namespace std;

int main() {
    string arr[]={"rahul","keshav","gaurav","ankit","akshay","arbaaz"};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    //Bubble Sort
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}