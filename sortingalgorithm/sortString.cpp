#include<bits/stdc++.h>
using namespace std;

int main() {
    string arr[5]={"raghav","urvi","sanket","harsh","vishwa"};
    int n=5;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

     for(int i=0;i<n-1;i++) {
            bool flag=true;
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                //swap
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                // swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag) {
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}