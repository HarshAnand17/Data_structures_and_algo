#include<bits/stdc++.h>
using namespace std;
void finduniqe(int arr[],int n) {
    int res=0; 
    for(int i=0;i<n;i++) res=res^arr[i];
    int temp=res;
    int k=0;
    while(true) {
        if((temp & 1)==1) {
            break;
        }
        temp = temp >> 1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++) {
        int num=arr[i];
        if(((num >> k) & 1) == 1) retval^=num;
    }
    cout<<retval<<" ";
    res=retval^res;
    cout<<res;
}
void finduniqe2(int arr[],int n) {
    int res=0;
    for(int i=0;i<n;i++) res=res^arr[i];
    int k=0;
    int temp=res;
    while(true) {
        if((temp & 1)==1) {
            break;
        }
        temp=temp>>1;
        k++;
    }
    int retval=0;
    for(int i=0;i<n;i++) {
        int num=arr[i];
        if((num>>k) & 1==1) retval^=num;
    }
    cout<<retval<<" ";
    res=res^retval;
    cout<<res;
}
int main() {
    int arr[]={1,2,1,3,2,5};
     int n=6;
    finduniqe(arr,n);
    cout<<endl;
    finduniqe2(arr,n);
     return 0;
}