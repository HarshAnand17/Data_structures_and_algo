#include<bits/stdc++.h>
using namespace std;
int main() {
    // int arr[]={2,1,0,6,-8,900,9,0,-80};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=1;i<n;i++){
    //     int j=i;
    //     while(j>=1 && arr[j]<arr[j-1]) {
    //             swap(arr[j-1],arr[j]);
    //             j--;
    //         }
    //     }

    // for(int i=1;i<n;i++) {
    //     int j=i;
    //     while(j>=1 && arr[j]<arr[j-1]) {
    //         int temp=arr[j];
    //         arr[j]=arr[j-1];
    //         arr[j-1]=temp;
    //         j--;
    //     }
    // }


   string s="AZYZXBDJKX";
    cout<<s<<endl;
    string str="";
    for(int i=0;i<s.size();i++) {
        if(s[i]>='X') {
           str.push_back(s[i]);
        }
    }
    int n=str.size();
    for(int i=1;i<n;i++) {
        int j=i;
        while(j>0 && str[j]>str[j-1]) {
             swap(str[j],str[j-1]);
             j--;
        }
    }
        cout<<endl;
    // for(int i=0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }

   cout<<str;
}