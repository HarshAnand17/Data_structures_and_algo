#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[],int si,int ei) {
     int pivotEle=arr[(si+ei)/2];
     int count=0;
     for(int i=si;i<=ei;i++) {
        if(i==(si+ei)/2) continue;
           if(arr[i]<pivotEle) {
              count++;
           }
     }
     int pivotIdx=si+count;
     swap(arr[(si+ei)/2],arr[pivotIdx]);
      int i=si;
      int j=ei;
     while(i<pivotIdx && j>pivotIdx) {
         if(arr[i]<=pivotEle) i++;
        else if(arr[j]>pivotEle) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
     }
     return pivotIdx;
}
int KthSmallest(int arr[],int si,int ei,int k) {
   // if(si>=ei) return;
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
  else if(pi+1<k) return KthSmallest(arr,pi+1,ei,k);
   else return KthSmallest(arr,si,pi-1,k);
}
int main() {
    int arr[]={5,1,8,2,7,6,3,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
     cout<<endl;
     int r=2;
     int k=n-r;
    cout<<KthSmallest(arr,0,n-1,k);
    
}