#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei) {
    int count=0;
    int pivotele = arr[si];
    for(int i=si+1;i<=ei;i++) {
        if(arr[i]<=pivotele) count++;
    }
     int pivotIdx = count+si;
     swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx) {
        if(arr[i]<=pivotele) i++;
        else if(arr[j]>pivotele) j--;
        else {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
 void quickSort(int arr[],int si,int ei) {
     if(si>=ei) return;
     int pi = partition(arr,si,ei);
     
     quickSort(arr,si,pi-1);
     quickSort(arr,pi+1,ei);
 }
 
 int main() {
    int arr[]={5,1,8,2,7,6,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
 }
