#include<bits/stdc++.h>
using namespace std;
int minProduct(vector<int> &arr) {
    int cn=0,cz=0,cp=0;
    int prod_pos=1;
    int prod_neg=1;
    int largestNeg=INT_MIN;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]<0) {
            cn++;
            prod_neg*=arr[i];
            largestNeg=max(largestNeg,arr[i]);
        }
        if(arr[i]==0) cz++;
        if(arr[i]>0) {
            cp++;
            prod_pos*=arr[i];
        }
    }
    if(cn==0) {
        if(cz>0) return 0;
        else {
            auto it=*min_element(arr.begin(),arr.end());
             return it;
        }
    }
    else {
        if(cn%2==0) {
            return (prod_neg/largestNeg)*prod_pos;
        }
        else {
            return prod_neg*prod_pos;
        }
    }
}
int main() {
     vector<int>arr={-2,-3,1,4,-2,-5};
     cout<<minProduct(arr)<<"\n";
     return 0;
}