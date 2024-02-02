#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[]={1,3,5,9,2};
    int n=5;
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    for(int i=0;i<n-1;i++) {
        bool flag=true;
        for(int j=0;j<n-1-i;j++) {
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<endl;
      for(int i=0;i<5;i++) cout<<a[i]<<" ";
}

