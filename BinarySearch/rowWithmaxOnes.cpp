#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[4][5]={{1,0,1,0,1},{0,0,1,1,1},{0,1,0,0,1},{1,1,1,1,1}};
     int m=4;//row
     int n=5;//cols
     int row=0;
     int maxOnes=0;
     //int x=0;
    for(int i=0;i<m;i++) {
    int count=0;
    int lo=0;
    int hi=n-1;
    int fi=-1;
    while(lo<=hi) {
        int mid=lo+(hi-lo)/2;
        if(arr[i][mid]==1) {
            if(mid==0) {
                fi=mid;
                break;
            }
            else if(arr[i][mid-1]!=1) {
                  fi=mid;
                  break;
            }
            else hi=mid-1;
        }
      //  else if(arr[i][mid]<1) lo=mid+1;
        //else hi=mid-1;
        else lo=mid+1;

    }
    if(fi!=-1) count = n-fi;
    if(maxOnes<count) {
        maxOnes=count;
        row=i;
    } 
 }
    cout<<row<<" "<<maxOnes;
}
